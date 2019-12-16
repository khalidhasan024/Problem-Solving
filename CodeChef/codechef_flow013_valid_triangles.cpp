#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x,y,z,k;
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> x >> y >> z;
        if(x+y+z == 180)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}