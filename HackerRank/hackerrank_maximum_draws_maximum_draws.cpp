#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x,k;
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> x;
        cout << x+1 << "\n";
    }
    return 0;
}