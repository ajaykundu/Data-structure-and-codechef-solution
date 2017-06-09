// A C++ program to check if a given graph is Eulerian or not
#include<iostream>
#include <list>
using namespace std;
 
// A class that represents an undirected graph
class Graph
{
    long V;    // No. of vertices
    list<long> *adj;    // A dynamic array of adjacency lists
public:
    // Constructor and destructor
    Graph(long V)   {this->V = V; adj = new list<long>[V]; }
    ~Graph() { delete [] adj; } // To avoid memory leak
 
     // function to add an edge to graph
    void addEdge(long v, long w);
 
    // Method to check if this graph is Eulerian or not
    int isEulerian();
 
    // Method to check if all non-zero degree vertices are connected
    bool isConnected();
 
    // Function to do DFS starting from v. Used in isConnected();
    void DFSUtil(long v, bool visited[]);
};
 
void Graph::addEdge(long v,long w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);  // Note: the graph is undirected
}
 
void Graph::DFSUtil(long v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<long>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
// Method to check if all non-zero degree vertices are connected.
// It mainly does DFS traversal starting from
bool Graph::isConnected()
{
    // Mark all the vertices as not visited
    bool visited[V];
    long i;
    for (i = 0; i < V; i++)
        visited[i] = false;
 
    // Find a vertex with non-zero degree
    for (i = 0; i < V; i++)
        if (adj[i].size() != 0)
            break;
 
    // If there are no edges in the graph, return true
    if (i == V)
        return true;
 
    // Start DFS traversal from a vertex with non-zero degree
    DFSUtil(i, visited);
 
    // Check if all non-zero degree vertices are visited
    for (i = 0; i < V; i++)
       if (visited[i] == false && adj[i].size() > 0)
            return false;
 
    return true;
}
 
/* The function returns one of the following values
   0 --> If grpah is not Eulerian
   1 --> If graph has an Euler path (Semi-Eulerian)
   2 --> If graph has an Euler Circuit (Eulerian)  */
int Graph::isEulerian()
{
    // Check if all non-zero degree vertices are connected
    if (isConnected() == false)
        return 0;
 
    // Count vertices with odd degree
    long odd = 0;
    for (int i = 0; i < V; i++)
        if (adj[i].size() & 1)
            odd++;
 
    // If count is more than 2, then graph is not Eulerian
    if (odd > 2)
        return 0;
 
    // If odd count is 2, then semi-eulerian.
    // If odd count is 0, then eulerian
    // Note that odd count can never be 1 for undirected graph
    return (odd)? 1 : 2;
}
 
// Function to run test cases
int test(Graph &g)
{
    int res = g.isEulerian();
    if (res == 0)
    {
        cout << "NO\n";
        return 0;
    }
    else if (res == 1)
    {
        cout << "NO\n";
        return 0;
    }
    else
    {
        cout << "YES\n";
        return 1;
    }
}
 
// Driver program to test above function
int main()
{
    // Let us create and test graphs shown in above figures

    long num_cities;
    cin>>num_cities;

    Graph g1(num_cities);

    long link_bwc;
    cin>>link_bwc;

    long arr[link_bwc];
    std::vector<int> v;
    long arr1[link_bwc];

    for(long i=0;i<link_bwc;i++)
    {
        long a,b;
        cin>>a>>b;
        arr[i]=a;
        arr1[i]=b;
        g1.addEdge(a-1,b-1);
    }

    
   
   if(test(g1))
   {
          
     
   int k=arr[0];

     for(long i=0;i<link_bwc;i++)
     {
               if(k==arr[i])
               {
                   cout<<arr[i]<<" "<<arr1[i];
                     k=arr1[i];

               }
               else
               {
                cout<<arr1[i]<<" "<<arr[i];
                k=arr[i];
               }
               cout<<endl;
     }
   }
 
    
 
    return 0;
}