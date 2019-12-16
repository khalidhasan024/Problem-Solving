#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;
int main()
{
    int t,x,y;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> x >> y;
        cout << max(x,y) << " " << x+y << "\n";

    }
    return 0;
}