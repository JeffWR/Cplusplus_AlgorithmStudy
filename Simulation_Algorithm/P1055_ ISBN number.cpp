#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int num=0;
    char s[100];
    cin>>s;
    int t=0;
    for(int i = 0 ; i < 12 ; i ++){
        if(s[i]!='-'){
            t++;
            num+=t*(s[i]-'0');
        }
    }
    int n=s[12]-'0';
    int anc=num%11;
    if(anc==n || (anc==10 && s[12]=='X')){
        cout << "Right";
    }else{
        for(int i=0;i<12;i++)cout<<s[i];
        if(anc==10)cout<<'X'<<endl;
        else cout<<anc<<endl;
    }
    return 0;
}
