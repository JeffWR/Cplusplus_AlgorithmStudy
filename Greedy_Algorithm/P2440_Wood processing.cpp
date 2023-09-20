#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
long long num[100100];
int n,m;
bool check(int x){
    int sum=0;
    for(int i = 1 ; i <= n ; i ++){
        sum+=num[i]/x;
    }
    if(sum>=m) return true;
    else return false;
}
int main(){
    cin >> n >> m;
    long long int total=0;
    for(int i = 1 ; i <= n ; i ++){
        cin >> num[i];
        total+=num[i];
    }
    
    if(total<m)
    {
        cout<<0<<endl;
        return 0;
    }
    int left=0;
    int right=100000000;
    while(left<=right){
        int mid=(left+right)/2;
        if(check(mid)){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    cout << right;
    return 0;
}
