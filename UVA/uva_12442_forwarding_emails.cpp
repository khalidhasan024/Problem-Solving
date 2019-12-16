#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

int main()
{

    int t,n,u,v,x,receipients[50005],start=0,counter=0,email_counter=0;
    queue<int> inwards;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> n;
        bool is_visited[n+5]={false}, has_inwards[n+5]={false};

        start = counter = 0;
        for(int i=1; i<=n; i++){
            cin >> u >> v;
            receipients[u] = v;
            has_inwards[v] = true;
        }

        for(int i=1; i<=n; i++){
            if(!has_inwards[i]){
                inwards.push(i);
            }
        }

        while(!inwards.empty()){
            bool is_inward_visited[n+5]={false};
            email_counter = 0;
            int i = inwards.front();
            inwards.pop();
            is_visited[i] = true;
            is_inward_visited[i] = true;
            x = receipients[i];
            while(!is_inward_visited[x]){
//                cout << "i:" << i << ", x:" << x << ", visited?:" << is_visited[x] << ", counter:" << email_counter << endl;
                email_counter++;
                is_inward_visited[x] = true;
                is_visited[x] = true;
                x = receipients[x];
//                cout << "i:" << i << ", x:" << x << ", visited?:" << is_visited[x] << ", counter:" << email_counter << endl;
            }

            if(email_counter > counter){
                counter = email_counter;
                start = i;
            } else if(email_counter == counter){
                start = min(i, start);
            }
        }







        for(int i=1; i<=n; i++){
            if(is_visited[i]) continue;

            email_counter = 0;
            is_visited[i] = true;
            x = receipients[i];
            while(!is_visited[x]){
//                cout << "i:" << i << ", x:" << x << ", visited?:" << is_visited[x] << ", counter:" << email_counter << endl;
                email_counter++;
                is_visited[x] = true;
                x = receipients[x];
//                cout << "i:" << i << ", x:" << x << ", visited?:" << is_visited[x] << ", counter:" << email_counter << endl;
            }

            if(email_counter > counter){
                counter = email_counter;
                start = i;
            } else if(email_counter == counter){
                start = min(i, start);
            }


        }

        cout << "Case " << i << ": " << start << "\n";

    }
    return 0;
}