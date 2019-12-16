#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,i,j,k,counter;
    cin >> t;
    for(int m=0; m<t; m++){
        cin >> n;
        bool area[103][103] = {false};
        counter = 0;

        for(int m=0; m<n; m++){
            cin >> i >> j >> k;
            for(int x=i; x<j; x++){
                for(int y=0; y<k; y++){
                    area[x][y] = true;
                }
            }

        }
        for(int x=0; x<100; x++){
            for(int y=0; y<100; y++){
                //cout << area[x][y] << " ";
                if (area[x][y])
                    counter++;
            }
            //cout << endl;
        }

        cout << counter << "\n";
    }

    return 0;
}