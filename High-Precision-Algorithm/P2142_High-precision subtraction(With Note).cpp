
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    int A1[105000]={0};
    int A2[105000]={0};
    int anc[105000]={0};
    string S1;
    string S2;
    cin >> S1;
    cin >> S2;
    int len1=S1.length();
    int len2=S2.length();
    if(len1<len2||(S1<S2&&len1==len2)){
        cout << "-";
        swap(S1,S2);
    }
    len1=S1.length();
    len2=S2.length();
    for(int i = 0 ; i < len1 ; i ++){
        A1[i]=S1[len1-1-i]-'0';
    }
    for(int i = 0 ; i < len2 ; i ++){
        A2[i]=S2[len2-1-i]-'0';
    }
    int xlen=max(len1,len2);
    for(int i = 0 ; i < xlen ; i ++){
        anc[i]=A1[i]-A2[i];
        if(anc[i]<0){
            anc[i]+=10;
            A1[i+1]--;
        }
    }
    while(anc[xlen]==0&&xlen!=0){
        xlen--;
    }
    for(int i = xlen ; i >=0 ; i --){
        cout << anc[i];
    }
    cout << endl;
    return 0;
}
