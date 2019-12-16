#include<iostream>

using namespace std;

int main()
{
    int t,x,y;
    string s1,s2;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s1 >> s2;
        x= s1.size();
        y=s2.size();
        for(int i=0; i<x; i++){
            if(s1[i] == 80 || s1[i] == 112)
                s1[i] = 'b';
            else if(s1[i] == 73 || s1[i] == 105)
                s1[i] = 'e';
            else if(s1[i] < 97)
                s1[i] = s1[i]+32;
        }
        for(int i=0; i<y; i++){
            if(s2[i] == 80 || s2[i] == 112)
                s2[i] = 'b';
            else if(s2[i] == 73 || s2[i] == 105)
                s2[i] = 'e';
            else if(s2[i] < 97)
                s2[i] = s2[i]+32;
        }
        //cout << s1 << " " << s2 << endl;
        if(s1 == s2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}