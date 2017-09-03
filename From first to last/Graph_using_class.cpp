#include<iostream>
#include <list>
#include <stack>
#include <queue>
 
using namespace std;
 
// This class represents a directed graph using adjacency list representation
class Graph
{
    int v;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void dfsrecUtil(bool visited[],int s);
public:
    Graph(int v);  // Constructor
    void addEdge(int src, int desc); // function to add an edge to graph
    void BFS(int s);  // prints BFS traversal from a given source s
    void DFS(int s); //prints DFS traversal from a given source.
    void dfsrec(int s);// prints using recursion.
};

Graph::Graph(int v)
{
	this->v=v;
	adj=new list<int>[v];
}

void Graph::addEdge(int src,int desc)
{
          adj[src].push_back(desc);  //add w to v list this is directed graph.
         // adj[desc].push_back(src);	
}

void Graph::BFS(int s) // s is a particular source  from which you can start.
{
       bool *visited=new bool[v];

       for(int i=0;i<v;i++)
       {
       	visited[i]=false;
       }
     list<int> queue;
     visited[s]=true;

     queue.push_back(s);

     list<int>::iterator i;

     while(!queue.empty())
     {
     	int s=queue.front();
     	cout<<s<<" ";
     	queue.pop_front();
     	for(i=adj[s].begin();i!=adj[s].end();++i)
     	{
     		if(visited[*i]==false)
     		{
                   visited[*i]=true;
                   queue.push_back(*i);
     		}
     	}
     }


}

void Graph::DFS(int s)
{
	bool *visited=new bool[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}

	stack<int> st;
	st.push(s);
	visited[s]=true;

	while(!st.empty())
	{
		cout<<st.top()<<" ";
		int temp=st.top();
		st.pop();
             
           list<int>::iterator itr;
           for(itr=adj[temp].begin();itr!=adj[temp].end();itr++)
           {
           	    if(visited[*itr]==false)
           	    {
           	    	visited[*itr]=true;
           	    	st.push(*itr);
           	    }
           }

	}
}

void Graph::dfsrecUtil(bool visited[],int s)
{
	visited[s]=true;
	cout<<s<<" ";

	list<int>::iterator itr;
	for(itr=adj[s].begin();itr!=adj[s].end();itr++)
	{
		if(visited[*itr]==false)
		{
			dfsrecUtil(visited,*itr);
		}
	}
}

void Graph::dfsrec(int s)
{
	bool *visited=new bool[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}

	dfsrecUtil(visited,s);
}

int main()
{
    // Create a graph given in the above diagram
   Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
   cout<<endl;
    cout<<"Following is Depth First Traversal"<<endl;
    g.DFS(3);
    cout<<endl;
    g.dfsrec(2);

    return 0;
}
