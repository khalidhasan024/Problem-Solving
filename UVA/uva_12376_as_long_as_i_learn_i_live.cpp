#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<queue>

using namespace std;

int main()
{
    int t,n,m,u,v,units[105],score=0,maximum,track;
    cin >> t;
    for(int i=0; i<t; i++){
        vector< list<int> > stages(105);
        cin >> n  >> m;
        score = 0;
        for(int j=0; j<n; j++){
            cin >> units[j];
        }
        for(int k=0; k<m; k++){
            cin >> u >> v;
            stages[u].push_back(v);
        }
        units[0] = 0;
        track = 0;
        while(true){
            u = track;
            maximum = 0;
            list<int> li = stages[u];
            for(list<int>::iterator itr = li.begin(); itr != li.end(); itr++){
                v = *itr;
                if(units[v] > units[maximum])
                    maximum = v;
                //cout << "u: " << u << ", v: " << v << ", max: " << maximum << ", score: " << score << endl;

            }
            score += units[maximum];
            track = maximum;
            if(stages[track].empty()) break;

        }
        cout << "Case " << i+1 << ": " << score << " " << maximum << endl;



    }
    return 0;
}