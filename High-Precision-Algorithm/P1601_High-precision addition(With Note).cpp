/*
Question: Given two non-negative integers (10^500), find their sum
Test_1:
    Input: 2 2
    Output: 4
Test_2:
    Input: 75640238654829564289 89745826597482754823
    Output: 165386065252312319112

(This is an optimization of addition so even addition of very large numbers can be done in a instance)
    */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
char c1[505];
char c2[505];
int a1[505];
int a2[505];
int ans[505];
int main(){
    cin >> c1 >> c2;
    int len1=strlen(c1);
    int len2=strlen(c2);
    for(int i = 0 ; i < len1 ; i ++){
        a1[i]=c1[len1-i-1]-'0';
    }
    for(int i = 0 ; i < len2 ; i ++){
        a2[i]=c2[len2-i-1]-'0';
    }
    int xlen=max(len1,len2);
    int v=0;
    for(int i = 0 ; i < xlen ; i ++){
        ans[i]=a1[i]+a2[i]+v;
        if(ans[i]>=10){
            ans[i]%=10;
            v=1;
        }else{
            v=0;
        }
    }
    if(v==1){
        cout << v;
    }
    for(int i = xlen-1 ; i >= 0 ; i --){
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
