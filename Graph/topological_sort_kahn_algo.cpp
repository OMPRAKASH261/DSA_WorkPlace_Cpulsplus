#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;
int v; // no of vertices
void add_edge(int a, int b, bool bidir = true){
    graph[a].push_back(b);
    if(bidir){
        graph[b].push_back(a);
    }
}

void topoBfs(){
    // kahn algo
    vector<int> indegree(v, 0);
    for(int i = 0; i < v; i++){
        for(auto neighbour : graph[i]){
            // i ---> neighbour
            indegree[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            qu.push(i);
            vis.insert(i);
        }
    }
    cout<<"starting bfs\n";
    while(not qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour : graph[node]){
            if(not vis.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    qu.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}

int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v, list<int> ());
    while(e--){
        int x, y;
        cin>>x>>y;
        add_edge(x, y, false);
    }
    topoBfs();
    return 0;
}

// inpurt
    // 8
    // 11
    // 0 2
    // 1 2
    // 1 3
    // 2 3
    // 2 6
    // 2 5
    // 3 5
    // 4 6
    // 5 6
    // 6 7

// output
    // starting bfs
    // 0 1 4 2 3 5 6 7 %   