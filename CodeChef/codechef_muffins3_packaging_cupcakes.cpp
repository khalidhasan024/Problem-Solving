#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int x,t;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> x;
        if(x<3)
            cout << x << "\n";
        else
            cout << x/2+1 << "\n";
    }
    return 0;
}