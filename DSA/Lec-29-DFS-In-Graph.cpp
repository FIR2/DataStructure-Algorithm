
// DFS -> Deapth first search
// DFS -> Is the triversal Technique
#include<iostream>
#include<conio.h>
#include<map>
#include<vector>
#include<list>



void dfs(int node, unordered_map<int, bool> &visited  unordered_map<int, list<int>> &adj,vector<int> &component )
{
    // jo bhi node phle ayi ho usko ans m store krlo
    component.push_back(node);
    // jo bhi node ayi hai uska visited true kardo
    visited[node] = true;
    //her connective node k liye recursive call
    for(auto i: adj[node])
     {
        if(!visited[i])
         {
           dfs(i,visited, adj,component);
         }
     }
}



// We given undirected and disconnected graph
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // prepare adjlist
    unordered_map<int, list<int>> adj;

    for(int i = 0; i<edges.size(); i++)
      {
        int v = edges[i][0];//find first node
        int u = edges[i][0];//find second node


        // dono node ko adjaency list men daldo
         adj[u].push_back(v);// U se V ke bich mein ak edge bna do
         adj[v].push_back(u);// V se U ke bich mein ak edge bna do

      }


     //hame answer bhi cahiye node ko store krne ke liye
     vector<vector<int>> ans;
     //create visited ds
     unordered_map<int, bool> visited;
      for(int i = 0; i<v; i++)
        {
            if(!visited[i])
             {
                vector<int> component;
                dfs(i,visited,adj,component); //call dfs
                ans.push_back(component);
             }
        }
       return ans;
}