#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;
int main()
{
    int t;
    float b,ls,theta;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> b >> ls;
        theta = acos(b/ls);
        //cout << b/ls ;
        //cout << sin(theta) << "-";
        cout << ls * sin(theta) << " ";
        theta = atan(ls/b);
        //cout << sin(theta) << "\n";
        cout << ls / sin(theta) << "\n";

    }
    return 0;
}