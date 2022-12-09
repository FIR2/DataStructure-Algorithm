#include<iostream>
#include<conio.h>
#include<unordered_map>
#include<map>
#include<queue>
#include<list>
#include<set>
void prepareAdjList( unordered_map<int, set<int> > &adjList,  vector<pair<int, int> > &edges)
{
    // graph undirected and disconected liya ha to isliye loop lena padega other wise bina loop ke ho jata
    for(int i = 0; i<edges.size() ; i++)
      {
        // jo edges h uska quadinate  nikal lenge yani u and v
         int u = edges[i].first;
         int v = edges[i].second;

        //  adjancecy list mein u and v ko dal denge
        adjList[u].insert(v);
        adjList[v].insert(u);
      } 
}




void printAdj(unordered_map<int, set<int> > &adjList)
{
    for(auto i :adjList)
    {
        cout<< i.first <<" -> ";
        for(auto j:i.second)
        {
            cout<< j <<", ";
        }cout << endl;
    }
}


void bfs(unordered_map<int, set<int> > &adjList, unordered_map<int , bool> &visited, vector<int> &ans, int node)
  {

    // create a queue int type
    queue<int> q;
    // queue ke andar node dalediya
    q.push(node);
    // ab jb queue mein node dal diya hai to visited ko true krdo
    visited[node] = 1;


    // ab jab tak node chalao jab queue empty na ho jaye
    while(!q.empty())   
      {
        //  sabse phle front node nikal lo
        int frontNode = q.front();
        //fir jo queue ke andar node padi hai usko hata do means pop kardo
        q.pop();

        //store frontNode into ans
        ans.push_back(frontNode);

        //traverse all neighbours of frontNode
        for( auto i: adjList[frontNode])
           {
            if(!visited[i])
              {
                q.push(i);
                visited[i] = 1;
              }

           }
      }
  }









// vector<int> BFS(int no of nodes, edges)
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Create a Adjancey List
    unordered_map<int, set<int> > adjList;
    // print krane ke liye ak answer le liye
    vector<int> ans;    
    // i'm create a visited data structure
    unordered_map<int , bool> visited;
    //create prepareAdjList
    prepareAdjList(adjList, edges);
  
    printAdj(adjList);
   
   //traverse all components of a graph
   for(int i = 0; i<vertex; i++)
    {
        if(!visited[i]){
            bfs(adjList,visited,ans,i);
        }
    }

}