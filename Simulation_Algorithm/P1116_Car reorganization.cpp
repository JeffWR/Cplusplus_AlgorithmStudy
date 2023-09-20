#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    int a;
    cin >> a;
    int s[a];
    int num=0;
    for(int i = 0 ; i < a ; i ++){
        cin >> s[i];
    }
    for(int j= a-1 ; j>=0 ; j --){
        for(int i = 0 ; i < j ; i ++){
            if(s[i]>s[i+1]){
                int c;
                c=s[i];
                s[i]=s[i+1];
                s[i+1]=c;
                num++;
            }
        }
    }
    cout << num << " ";
    return 0;
}
