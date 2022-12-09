#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;


class graph
{
   public:
    //   CREATE A  MAP PASS ARGUMENTS , KEY AND LIST OF THE KEY
     unordered_map<int, list<int> > adj;

    //  create a function
    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        // create edge from u to v
        adj[u].push_back(v);

        if(direction == 0)
           {
             adj[v].push_back(u);
           }
    }

    // CERATE A PRINT FUNCTION FOR PRINT GRAPH
    void printAdjList() 
    {
     // JITNE NODES Hai SAB  KE SAB DEDO
       for(auto i:adj) 
        {
         cout<< i.first << "-> " ;
         for(auto j: i.second)
           {
             cout << j << ", ";
           }
            cout<< endl ;
        }
    }


       
};

 
int main()
{
    
    int n ;
    cout<< " Enter number of nodes. " <<endl;
    cin>> n;

    int m;
    cout<< " Enter number of edges. "<<endl;
    cin >> m;


    //CREATE A GRAPH
    graph g;
     cout<< "Write all edges "<<endl;
    //PRINT EDGES
     for(int i = 0; i<m; i++){
         int u,v;
         cin>>u >> v;

         //CREATING UNDIRECTED GRAPH
        // g ke amdar ye edge add krdo
        // g.addEdge(u,v,0);
        // CREATING DIRECTED GRAPH
        g.addEdge(u,v,1);
     }


    //PRINT GRAPH
      g.printAdjList();


      return 0;
   
}