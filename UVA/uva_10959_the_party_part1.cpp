#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<queue>

using namespace std;

int main()
{
    int k=0,p=0,c=0,x=0,y=0,scores[1005];
    std::queue<int> dance_queue;
    bool has_danced[1005] = {false};
    cin >> k;
    for(int i=0; i<k; i++){
        std::vector<std::list<int> > persons(1005);
        cin >> p >> c;
        for(int j=0; j<c; j++){
            cin >> x >> y ;
            persons[x].push_back(y);
            persons[y].push_back(x);
        }

        for(int i=0; i<p; i++){
            has_danced[i] = false;
            scores[i] = -1;
        }

        has_danced[0] = true;
        scores[0] = 0;
        dance_queue.push(0);
        while(!dance_queue.empty()){
            x = dance_queue.front();
            dance_queue.pop();
            std::list<int> li = persons[x];
            for(std::list<int>::iterator iter = li.begin(); iter!= li.end(); ++iter){
                y = *iter;
                if(!has_danced[y]){
                    has_danced[y] = true;
                    scores[y] = scores[x]+1;
                    dance_queue.push(y);

                }

            }
        }

        for(int i = 1 ; i<p; i++){
            cout << scores[i] << "\n";
        }
        if(i != k-1)
            cout << "\n";


    }
    return 0;
}