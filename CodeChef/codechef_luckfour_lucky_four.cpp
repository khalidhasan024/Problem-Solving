#include<iostream>
#include<sstream>
#include<string>

using namespace std;
int main()
{
    int t,x,s,counter;
    string num;
    cin >> t;
    for(int i=0; i<t; i++){
        counter = 0;
        cin >> x;
        ostringstream str1;
        str1 << x;
        num = str1.str();
        s = num.size();
        for(int i=0; i<s; i++){
            if(num[i] == '4')
                counter++;
        }
        cout << counter << "\n";

    }
    return 0;
}