#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int x, n,k,counter=0;
    while(scanf("%lld %lld",&n,&k) != EOF){
        for(int i=0; i<n; i++){
            cin >> x;
            if(x%k == 0)
                counter++;
        }
        cout << counter << "\n";
        counter = 0;
    }
    return 0;
}