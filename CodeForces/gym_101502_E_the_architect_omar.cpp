#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int t,n,k,b,l;
    string s;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        b=k=l=0;
        for(int i=0; i<n; i++){
            cin >> s;
            if(s[0] == 'b' || s[0] == 'B')
                b++;
            if(s[0] == 'l' || s[0] == 'L')
                l++;
            if(s[0] == 'k' || s[0] == 'K')
                k++;
        }
        cout << min(b/2,min(l,k)) << "\n";

    }


    return 0;
}