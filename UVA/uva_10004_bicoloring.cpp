#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<queue>

using namespace std;

int main()
{
    int n=0,l=0,x=0,y=0;
    std::queue<int> color_queue;
    bool is_colored[205] = {false}, colors[205] = {false}, bicolorable = true;
    while(scanf("%d",&n) && n){
            cin >> l;
        std::vector<std::list<int> > nodes(205);
        for(int i=0; i<l; i++){
            cin >> x >> y ;
            nodes[x].push_back(y);
            nodes[y].push_back(x);
        }

        for(int i=0; i<n; i++){
            is_colored[i] = false;
            colors[i] = 0;
        }

        is_colored[0] = true;
        colors[0] = 0;
        color_queue.push(0);
        bicolorable = true;
        while(!color_queue.empty()){
            x = color_queue.front();
            color_queue.pop();
            std::list<int> li = nodes[x];
            for(std::list<int>::iterator iter = li.begin(); iter!= li.end(); ++iter){
                y = *iter;
                if(!is_colored[y]){
                    is_colored[y] = true;
                    colors[y] = !colors[x];
                    color_queue.push(y);


                } else if(colors[x] == colors[y]){
                    bicolorable = false;

                    break;
                }

            }

            if(!bicolorable) break;
        }
        color_queue = queue<int>();  // --------clearing the queue



        if(bicolorable)
            cout << "BICOLORABLE.\n";
        else
            cout << "NOT BICOLORABLE.\n";


    }
    return 0;
}