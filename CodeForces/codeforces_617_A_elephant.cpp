#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x;
    while(scanf("%d", &x) != EOF){
        if(x%5 == 0)
            cout << x/5 << "\n";
        else
            cout << x/5+1 << "\n";
    }
    return 0;
}