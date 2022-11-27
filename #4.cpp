#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    vector <int> a; vector <int>b; vector <int>c;
    cin >> n; // размер массива
    for(int i = 0;i < n;i++){
        cin >> m;
        a.insert(a.end(),m);   
    }
    b.insert(b.end(),a[0]);
    for(int i = 1;i < a.size();i++){
        if(a[i] == a[i - 1]){
            b.insert(b.end(),a[i]);
        }else{
            b.clear();
            b.insert(b.end(),a[i]); 
        }
        if(b.size() > c.size()){
            c.clear();
            for(auto e : b){
                c.insert(c.end(),e);
            }
        }
    }
    if(b.size() > c.size()){
        for(auto i : b){
            c.insert(c.end(),i);
        }
    }
    for(auto i : c){
        cout << i <<' ';
    }
}
