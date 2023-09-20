#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
int a=0;
int main(){
    char numb[50]="0123456789ABCDEFGHIJ";
    int r;
    long long n;
    cin >> n >> r;
    cout << n << "=" ;
    stack<int>s;
    while(n!=0){
        a=n%r;
        n/=r;
        if(a<0){
            a-=r;
            n++;
        }
        s.push(a);
    }
    while(!s.empty()){
        cout << numb[s.top()];
        s.pop();
    }
    cout << "(base" << r << ")" << endl;
    return 0;
}
