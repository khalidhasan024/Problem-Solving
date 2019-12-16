#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int vowels[]={1,21,5,15,9};
    int consnts[]={10,19,2,11,20,3,12,4,13,22,14,23,6,24,7,16,25,8,17,26,18};
    int v_count,c_count,v_pos,c_pos;
    int n,x;
    string v_str,c_str;
    char ch;
    cin >> n;
    for(int j=0; j<n; j++){
        cin >> x;
        cout << "Case " << j+1 << ": ";
        c_count = c_pos = v_count = v_pos = 0;
        c_str = v_str = "";


        for(int i=1; i<=x; i++){
            if(i%2 != 0){
                v_count++;
                ch = 64+vowels[v_pos];
                v_str += ch;
                if(v_count == 21){
                    v_count = 0;
                    v_pos++;
                }
            } else {
                c_count++;
                ch = 64+consnts[c_pos];
                c_str += ch;
                if(c_count == 5){
                    c_count = 0;
                    c_pos++;
                }
            }

        }
        char v_array[v_str.length() + 1], c_array[c_str.length() + 1];

        strcpy(v_array, v_str.c_str());
        sort(v_array, v_array+v_str.length());

        strcpy(c_array, c_str.c_str());
        sort(c_array, c_array+c_str.length());



        for(int i=0; i<x; i++){
            if(i%2 == 0){
                cout << v_array[i/2];
            } else {
                cout << c_array[i/2];
            }
        }
        cout << "\n";
    }

    return 0;
}