#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;
unsigned long long n;
int main(){
    cin >> n;
    cout << n*(n-1)/2*(n-2)/3*(n-3)/4 << endl;
    return 0;
}
