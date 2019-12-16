#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int k,x,y,z,sum,counter=0;
    while(scanf("%d", &k) != EOF){
        for(int i=0; i<k; i++){
            sum = 0;
            cin >> x >> y >> z;
            sum += x+y+z;
            if(sum > 1)
                counter++;
        }
        cout << counter << "\n";
        counter = 0;

    }
    return 0;
}