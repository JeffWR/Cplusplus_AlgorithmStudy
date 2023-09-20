
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
int s[10000];
int main(){
    
    string a;
    
    cin >> a;
    int n;
    cin >> n;
    long long len=a.size();
    for(int i = 0 ; i < len ; i ++){
        s[i]=a[i]-'0';
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < len ; j ++){
            if(s[j]>s[j+1]){
                for(int l = j ; l < len ; l ++){
                    s[l]=s[l+1];
                }
                len-=1;
                break;
            }
        }
    }
    int cnt=0;
    int res=0;
    for(int i = len-1 ; i >= 0 ; i --){
        res+=pow(10,cnt)*s[i];
        cnt++;
    }
    cout << res << endl;
    return 0;
}
