#include<bits/stdc++.h>
using namespace std;

int n, x=0, part_1, part_2, i, j, k, counter = 0;
unsigned long long int cumsum[100005], sum = 0, arc, point_1, point_2, point_3;
bool has_point2 = false, has_point3 = false;

int count_triangles(int arc)
{
    counter = 0;

    for(i=0; i<n; i++){
        if(cumsum[i] <= arc)
            continue;
        else
            break;
    }
    part_1 = i-1;
    for(; i<n; i++){
        if(cumsum[i] <= 2*arc)
            continue;
        else
            break;
    }
    part_2 = i-1;


    i = 0;
    j = part_1+1;
    k = part_2+1;

    for(;i<=part_1;i++){
        has_point2 = has_point3 = false;
        point_1 = cumsum[i];
        point_2 = point_1 + arc;
        point_3 = point_2 + arc;

        for(;j<=part_2;j++){
            if(cumsum[j] < point_2)
                continue;
            else if(cumsum[j] > point_2)
                break;
            else {
                has_point2 = true;
                j++;
                break;
            }
        }
        for(;k<n;k++){
            if(cumsum[k] < point_3)
                continue;
            else if(cumsum[k] > point_3)
                break;
            else {
                has_point3 = true;
                k++;
                break;
            }
        }
        if(has_point2 && has_point3)
            counter++;
        //cout << "i: " << i << ", counter: " << counter << endl;

    }
    cout << counter << "\n";
    return 0;
}

int main()
{
    while(scanf("%d", &n) != EOF){
        for(int i=0; i < n; i++){
            cin >> x;
            sum += x;
            cumsum[i] = sum;
        }
        arc = sum/3;
        count_triangles(arc);
        sum = 0;
    }


    return 0;
}