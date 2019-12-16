#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x,y;
    while(scanf("%d %d",&x, &y) != EOF){
        cout << x*y/2 << "\n";
    }

    return 0;
}