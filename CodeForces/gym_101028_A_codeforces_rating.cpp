#include<iostream>

using namespace std;

int main()
{
    int t,n,r,x,y,sum;
    cin >> t;
    for(int i=0; i<t; i++){
            sum = 1500;
        cin >> n >> r;
        for(int i=0; i<n; i++){
            cin >> x;
            sum += x;
        }
        if(sum == r)
            cout << "Correct\n";
        else
            cout << "Bug\n";
    }
    return 0;
}