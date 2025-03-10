#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<unordered_set>
#include<climits>

using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;

int v; //number of vertices
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src,int dest,vector<int>& dist){
    queue<int> q;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src]=0;
    visited.insert(src);
    q.push(src);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<" ";
        for(auto neighbour: graph[curr]){
        if(!visited.count(neighbour)){
            q.push(neighbour);
            visited.insert(neighbour);
            dist[neighbour]=dist[curr]+1;
        }       
        }
    }
}

int main(){
    cout<<"enter no of vertices";   
    cin>>v;
    graph.resize(v,list<int> ());
int e;
cout<<"enter number of edges";
cin>>e;

while(e--){
    int s,d;
    cout<<" enter s and d: ";
    cin>>s>>d;

    add_edge(s,d);
}
    
    int x,y;
    cin>>x>>y;
    vector<int> dist;
    bfs(x,y,dist);

    cout<<endl;
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }

return 0;
}