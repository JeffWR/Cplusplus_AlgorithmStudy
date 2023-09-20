#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int a[26]={0};
int main(){
    string x;
    cin >> x;
    int i;
    int len = x.length();
    for( i = 0 ; i < len ; i ++){
        a[x[i]-'a']++;
    }
    int minn;
    sort(a,a+26);
    for(int k = 0 ; k < 26 ; k ++){
        if(a[k]>0){
            minn=a[k];
            break;
        }
    }
    int maxn=a[25];
    int m=maxn-minn;
    if(m==1||m==0){
        cout << "No Answer" << endl;
        cout << "0" << endl;
        return 0;
    }
    for(int j = 2 ; j < m ; j ++ ){
        if(m%j==0){
            cout << "No Answer" << endl;
            cout << "0" << endl;
            return 0;
        }
    }
    cout << "Lucky Word" << endl;
    cout << m << endl;
    return 0;
}
