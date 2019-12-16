#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,d,r,d_pos,r_pos,time;
    bool david[100005], roger[100005], d_count, r_count;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> d >> r;
        for(int i=0; i<=n; i++){
            david[i] = false;
            roger[i] = false;
        }
        d_pos = r_pos = 1;
        time = 0;
        while(true){
            time++;
            d_pos+= d;
            d_pos%=n;
            david[d_pos] = true;
            r_pos+= r;
            r_pos%=n;
            roger[r_pos] = true;
//            cout << "david:" << d_pos << ", roger:" << r_pos << endl;
            if(roger[d_pos])
                break;
            if(david[r_pos])
                break;


        }
        cout << time << "\n";
    }
    return 0;
}