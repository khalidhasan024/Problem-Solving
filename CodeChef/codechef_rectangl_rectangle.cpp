#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int k, nums[6];
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];
        sort(nums, nums+4);
        if(nums[0] == nums[1] && nums[2] == nums[3])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}