#include<iostream>
#include<sstream>
#include<string>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int t,x,s,ans;
    string num;
    cin >> t;
    for(int i=0; i<t; i++){
        //counter = 0;
        cin >> x;
        ostringstream str1;
        str1 << x;
        num = str1.str();
        //ans = atoi(num.c_str());
        reverse(num.begin(),num.end());
        sscanf(num.c_str(),"%d",&ans);
        cout << ans << "\n";

    }
    return 0;
}