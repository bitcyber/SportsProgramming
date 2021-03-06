#include<bits/stdc++.h>
#include<list>
using namespace std ;

class Graph
{
    int v;

    list<int> *adj;

    void DFSUtil(int v, bool visited[]);

    Public:
        Graph(int v);
        void addEdge(int v, int w);
        void DFS(int v);
};

Graph :: Graph(int v)
{
    this -> v = v;
    adj = new list<int> [v];
}
void Graph :: addEdge(int v,int w)
{
    adj[v].push_back(w);
}

void Graph:: DFSUtil(int v,bool visited[])
{
    visited[v]= true;
    cout<<v<< " ";

    list<int>::iterator i;

    for(i = adj[v].begin();i!= adj[v].end();++i)
        if(!visited[*i])
            DFSUtil(*i,visited);
}

void Graph:: DFS(int v)
{
    bool *visited = new bool[v]
    for(int i=0;i<v;i++)
     visited[i] = false;
     DFSUtil(v,visited);
}
