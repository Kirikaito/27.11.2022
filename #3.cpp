#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a = 0;
    string lis = "",c;
    cin >> n;

    for(int i = 1; i <= n; i++){
        lis = lis + to_string(i);
    }
    cout << lis[n - 1];
}
