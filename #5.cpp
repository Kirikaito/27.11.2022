#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,m=0;
    string a;
    cin >> a;
    for(auto i : a){
        if(i == '('){
            n++;
        }
        if(i == ')'){
            m++;
        }
    }
    if((n == m) && (a[0] != ')') && (a[a.size() - 1] != '(')){
        cout << "correct"<<endl;
        cout << n;
    }else{
        cout << "incorrect"<<endl;
        if(m < n){
            cout << m;
        }else{
            cout << n;
        }
    }
}
