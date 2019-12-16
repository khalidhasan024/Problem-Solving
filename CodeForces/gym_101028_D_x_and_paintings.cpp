#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t,r,c,l,r1,r2,c1,c2;
    char ch, plane[105][105];
    cin >> t;
    for(int i=0; i<t; i++){
        memset(plane, '.', sizeof(plane));
        cin >> r >> c >> l;

        for(int i=0; i<l; i++){
            cin >> r1 >> c1 >> r2 >> c2 >> ch;
            for(int i=r1; i<=r2; i++){
                for(int j=c1; j<=c2; j++){
                    plane[i][j] = ch;
                }
            }
        }

        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                cout << plane[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}