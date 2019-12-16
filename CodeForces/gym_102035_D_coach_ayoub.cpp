#include<iostream>
using namespace std;

int main()
{
    int n, a, b, s, max_s, min_s;
    cin >> n >> a >> b >> s;
    max_s = a + b * (n-1);
    min_s = a * (n-1) + b;
    if(s < min_s || s > max_s)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}