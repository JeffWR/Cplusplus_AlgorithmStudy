#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int ans,n;
string a[10005];
string o;
int use[10005];
bool check(string s,string m,int k){
    int lens = s.length();
    for (int i=0;i<k;i++){
        if(s[lens-k+i]!=m[i])
            return false;
    }
    return true;
}

void add(string &s,string m,int k){
    int lenm = m.length();
    for (int i=k;i<lenm;i++)
        s+=m[i];
}

void DFS(string s){
    int mml = s.length();
    ans = max(ans,mml);
    for (int i=1;i<=n;i++){
        if (use[i]>=2)
            continue;
        int maxk = a[i].length();
        for (int j=1;j<=maxk;j++){
            if (check(s,a[i],j)){
                string op = s;
                add(op,a[i],j);
                if (op==s)
                    continue;
                use[i]++;
                DFS(op);
                use[i]--;
            }
        }
    }
}

int main(){
    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> a[i];
    cin >> o;
    DFS(o);
    cout << ans << endl;
    return 0;
    
}
