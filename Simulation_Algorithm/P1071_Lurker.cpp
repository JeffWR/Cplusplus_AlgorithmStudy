#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
string a,b,c;
char aa[10000];
char bb[10000];
char ans[10000];
int abln;
int cln;
int IFdifferent(string a,string b){
    int u=0;
    abln=a.size();
    for(int i = 0 ; i < abln ; i ++){
        aa[i]=a[i];
        bb[i]=b[i];
    }
    for(int i = 0 ; i < abln ; i ++){
        for(int j = i+1 ; j < abln ; j ++){
            if((aa[i]==aa[j]&&bb[i]!=bb[j])||(aa[i]!=aa[j]&&bb[i]==bb[j])){
                u=1;
                //cout << aa[i] << " " << aa[j] << endl << bb[i] << " " << bb[j] << endl << i << " " << j << endl << endl;
            }
        }
    }
    return u;
}
int main(){
    cin >> a >> b >> c;
    if(IFdifferent(a,b)==1||abln<26){
        cout << "Failed" << endl;
        return 0;
    }
    cln=c.size();
    for(int i = 0 ; i < cln ; i ++){
        for(int j = 0 ; j < abln ; j ++){
            if(aa[j]==c[i]){
                ans[i]=bb[j];
            }
        }
    }
    for(int i = 0 ; i < cln ; i ++){
        cout << ans[i];
    }
    return 0;
}
