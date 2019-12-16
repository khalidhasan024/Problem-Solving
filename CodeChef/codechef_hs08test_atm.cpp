#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int w;
    double b;
    while(scanf("%d %lf",&w,&b) != EOF){
        if(w%5 == 0 && b-0.5 >= w){
            printf("%.2lf\n", b-w-0.5);
        }
        else
            printf("%.2lf\n",b);
    }
    return 0;
}