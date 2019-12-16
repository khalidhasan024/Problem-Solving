#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;
int main()
{
    int t,x,y,z,num[5];
    //string num;
    cin >> t;
    for(int i=0; i<t; i++){
        //counter = 0;
        cin >> x >> y >> z;
        if(x > y){
            num[0] = y;
            num[1] = x;
        }
        else{
            num[1] = y;
            num[0] = x;
        }
        if(z > num[1])
            cout << num[1] << "\n";
        else if(z < num[0])
            cout << num[0] << "\n";
        else
            cout << z << "\n";


    }
    return 0;
}