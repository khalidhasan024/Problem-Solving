#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int counter = 0,length;
    char pos = '0';
    char stmt[105];
    while(scanf("%s",stmt) != EOF){
        length = strlen(stmt);
        for(int i=0; i<length; i++){
            if(stmt[i] == pos){
                counter++;
                if(counter > 6) break;
            }
            else{
                pos = stmt[i];
                counter = 1;
                if(counter > 6) break;
            }
        }
        if(counter > 6)
            cout << "YES\n";
        else
            cout << "NO\n";

        counter = 0;
    }
    return 0;
}