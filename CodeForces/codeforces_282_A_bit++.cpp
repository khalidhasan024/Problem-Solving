#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int k,value=0;
    string stmt;
    while(scanf("%d", &k) != EOF){
        for(int i=0; i<k; i++){
            cin >> stmt;
            if(stmt[1] == '+')
                value++;
            else if(stmt[1] == '-')
                value--;
        }
        cout << value << "\n";
        value = 0;

    }
    return 0;
}