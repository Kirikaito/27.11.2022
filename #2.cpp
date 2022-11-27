#include <iostream>

using namespace std;

int main()
{
    int a,b = 0;
    cin >> a;
    for( int x = 1; x <=9;x++){
        for( int y = 0; y <=9;y++){
            for( int z = 0; z <=9;z++){
                if(a == x + y + z){
                    b++;
                }
            }
        }
    }
    cout << b;
}
