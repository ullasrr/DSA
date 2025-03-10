#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v; //number of vertices
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el:graph[i]){
            cout<<el<<" ";
        }
        cout<<endl;
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

    add_edge(s,d,false);
}

display();
return 0;
}