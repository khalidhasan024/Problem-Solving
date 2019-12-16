#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string line, country;
    map<string , int> count_map;

    for(int i=0; i<n; i++){
        getline(cin, line);
        stringstream ss(line);
        ss >> country;

        count_map[country]++;
    }

    for(map<string, int>::iterator it = count_map.begin(); it != count_map.end(); it++){
        cout << it->first << " " << it->second << "\n";
    }

    return 0;
}