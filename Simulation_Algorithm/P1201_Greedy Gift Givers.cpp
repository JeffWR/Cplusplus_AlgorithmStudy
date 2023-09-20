#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
struct people{
    string name;
    int money;
    int send;
    int recive;
};
int main(){
    int NP;
    cin >> NP;
    people p[NP];
    for(int i = 0 ; i < NP ; i ++){
        p[i].name="";
        p[i].money=0;
        p[i].recive=0;
        p[i].send=0;
    }
    for(int i = 0 ; i < NP ; i ++){
        cin >> p[i].name;
    }
    for(int l = 0 ; l < NP ; l ++){
        string name;
        cin >> name;
        for(int i = 0 ; i < NP ; i++){
            if(name==p[i].name){
                int m,n;
                cin >> m >> n;
                if(n==0){
                    break;
                }
                p[i].money=m;
                p[i].send=m/n*n;
                string f;
                for(int j = 0 ; j < n ; j++){
                    cin >> f;
                    for(int k = 0 ; k < NP ; k++){
                        if(p[k].name==f){
                            p[k].recive += m/n;
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    for(int i = 0 ; i < NP ; i ++){
        cout << p[i].name << " " << p[i].recive-p[i].send << endl;
    }
    return 0;
}
