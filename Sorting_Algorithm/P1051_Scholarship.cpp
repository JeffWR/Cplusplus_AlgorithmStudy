#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
struct bonus{
    string N;//姓名
    int S;//期末平均成绩
    int CS;//班级评议成绩
    char SL;//学生干部
    char WP;//西部省份学生
    int P;//发表的论文数。
};
int main(){
    int n;
    cin >> n;
    bonus a[n];
    int v[n];
    for(int i = 0 ; i < n ; i ++){
        v[i]=0;
    }
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i].N >> a[i].S >> a[i].CS >> a[i].SL >> a[i].WP >> a[i].P;
    }
    int money=0;
    for(int i = 0 ; i < n ; i ++){
        
        if(a[i].S>80&&a[i].P>=1){
            money+=8000;
            v[i]+=8000;
        }
        if(a[i].S>85&&a[i].CS>80){
            money+=4000;
            v[i]+=4000;
        }
        if(a[i].S>90){
            money+=2000;
            v[i]+=2000;
        }
        if(a[i].S>85&&a[i].WP=='Y'){
            money+=1000;
            v[i]+=1000;
        }
        if(a[i].CS>80&&a[i].SL=='Y'){
            money+=850;
            v[i]+=850;
        }
    }
    for(int j= n-1 ; j>=0 ; j --){
        for(int i = 0 ; i < j ; i ++){
            if(v[i]<v[i+1]){
                swap(v[i],v[i+1]);
                swap(a[i].N,a[i+1].N);
            }
        }
    }
    cout << a[0].N << endl << v[0] << endl << money;
    return 0;
}
