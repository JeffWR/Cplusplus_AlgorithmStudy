/*
Question: Given two non-negative integers (10^2000), find their product
Test_1:
    Input: 2 2
    Output: 4
Test_2:
    Input: 75640238654829564289 89745826597482754823
    Output: 6788395742108546303293147598936503315847

(This is an optimization of multiplication so even multiplication of very large numbers can be done in a instance)
    */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
char arr1[3000];
char arr2[3000];
int a[3000]={0};
int b[3000]={0};
int c[10000000]={0};
int main(){
    cin >> arr1;
    cin >> arr2;
    //Input the number in character form
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    for(int i = 0 ; i < len1 ; i ++){
        a[i]=arr1[len1-i-1]-'0';
        //Store the input string with individual digit
    }
    for(int i = 0 ; i < len2 ; i ++){
        b[i]=arr2[len2-i-1]-'0';
        //Store the input string with individual digit
    }
    for(int i = 0 ; i < len1 ; i ++){
        for(int j = 0 ; j < len2 ; j ++){
            //Calculate each digit separately
            c[i+j+1]+=(c[i+j]+a[i]*b[j])/10;//Number carry to the next digit
            c[i+j]=(c[i+j]+a[i]*b[j])%10;//Number added to the current digit
        }
    }
    int Mlen=len1+len2;
    while(c[Mlen]==0&&Mlen!=0){
        Mlen--;
        //Test the length of the finnial answer
    }
    for(int i = Mlen ; i >= 0; i -- ){
        cout << c[i];
    }
    //Output
    cout << endl;
    return 0;
}
