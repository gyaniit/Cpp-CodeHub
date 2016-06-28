//BFS shortest distance using adjacency list traversal
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

class Graph{
    int v;
    list<int> *adj;
    public:
        Graph(int n);
        void addEdge(int a,int b);
        void BFS(int s);
};

Graph::Graph(int n){
    this->v=n;
    adj = new list<int>[v];
}

void Graph::addEdge(int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);//best line
}

void Graph::BFS(int s){
    int visited[v];
    int count=0;
    int start=s;
    for(int i =0;i<v;i++){
        visited[i]=-1;
    }

    list<int> queue;
    visited[s]=0;
    queue.push_back(s);

    list<int>::iterator i;

    while(!queue.empty()){
        s=queue.front();
        count++;
        queue.pop_front();

        for(i=adj[s].begin();i!=adj[s].end();i++){
            if(visited[*i]==-1){
                queue.push_back(*i);
                visited[*i]=count;
            }
        }
    }
    for(int j=0;j<v;j++){
        if(j==start)
            continue;
        if(visited[j]==-1)
            cout<<-1<<" ";
        else
            cout<<visited[j]*6<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int v,e,s;
        cin>>v>>e;
        Graph g(v);
        while(e--){
            int a,b;
            cin>>a>>b;
            g.addEdge(a-1,b-1);
        }
        cin>>s;
        g.BFS(s-1);
    }
    return 0;
}

