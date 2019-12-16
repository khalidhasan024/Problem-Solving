#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
    string code, x , segment, numbers[12];
    cin >> code;
    for(int i=0; i<10; i++){
        cin >> x;
        numbers[i] = x;
    }
    for(int i=0; i<8; i++){
        segment = code.substr(i*10, 10);
//        cout << "i: " << i << ", seg: " << segment << endl;
        for(int i=0; i<10; i++){
            if(numbers[i] == segment)
                cout << i;
        }
    }

    return 0;
}