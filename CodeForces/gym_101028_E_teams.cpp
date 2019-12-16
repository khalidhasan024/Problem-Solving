#include<iostream>
#include<cstring>

using namespace std;

long long int gcd(int a, int b)
 {
    if (a == 0 || b == 0)
        return 0;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
 }

int main()
{
    int t,n;
    long long int x,sum, g;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cin >> x;
        g = x;
        sum = x;
        for(int i=1; i<n; i++){
            cin >> x;
            sum += x;
            if(x%g != 0)
                g = gcd(g,x);
        }
        cout << g << " " << sum/g << "\n";
    }

    return 0;
}