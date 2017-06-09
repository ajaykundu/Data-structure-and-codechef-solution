// A Java program to check if a given graph is Eulerian or not
import java.io.*;
import java.util.*;
import java.util.LinkedList;
 
// This class represents an undirected graph using adjacency list
// representation
class Graph
{
    private int V;   // No. of vertices
 
    // Array  of lists for Adjacency List Representation
    private LinkedList<Integer> adj[];
 
    // Constructor
    Graph(int v)
    {
        V = v;
        adj = new LinkedList[v];
        for (int i=0; i<v; ++i)
            adj[i] = new LinkedList();
    }
 
    //Function to add an edge into the graph
    void addEdge(int v, int w)
    {
        adj[v].add(w);// Add w to v's list.
        adj[w].add(v); //The graph is undirected
    }
 
    // A function used by DFS
    void DFSUtil(int v,boolean visited[])
    {
        // Mark the current node as visited
        visited[v] = true;
 
        // Recur for all the vertices adjacent to this vertex
        Iterator<Integer> i = adj[v].listIterator();
        while (i.hasNext())
        {
            int n = i.next();
            if (!visited[n])
                DFSUtil(n, visited);
        }
    }
 
    // Method to check if all non-zero degree vertices are
    // connected. It mainly does DFS traversal starting from
    boolean isConnected()
    {
        // Mark all the vertices as not visited
        boolean visited[] = new boolean[V];
        int i;
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
    int isEulerian()
    {
        // Check if all non-zero degree vertices are connected
        if (isConnected() == false)
            return 0;
 
        // Count vertices with odd degree
        int odd = 0;
        for (int i = 0; i < V; i++)
            if (adj[i].size()%2!=0)
                odd++;
 
        // If count is more than 2, then graph is not Eulerian
        if (odd > 2)
            return 0;
 
        // If odd count is 2, then semi-eulerian.
        // If odd count is 0, then eulerian
        // Note that odd count can never be 1 for undirected graph
        return (odd==2)? 1 : 2;
    }
 
    // Function to run test cases
    int test()
    {
        int res = isEulerian();
        if (res == 0){
            System.out.println("no");
            return 0;
        }
        else if (res == 1){
            System.out.println("no");
            return 0;
        }
        else{
           System.out.println("yes");
           return 1;
        }
    }
 
    // Driver method
    public static void main(String args[])
    {
        // Let us create and test graphs shown in above figures
       


         int num_cities;
         Scanner input=new Scanner(System.in);

     num_cities=input.nextInt();

    Graph g1=new Graph(num_cities);

    int link_bwc;
    
    link_bwc=input.nextInt();

    int  arr[]=new arr[link_bwc];
    int  arr1[]=new arr1[link_bwc];

    for(int i=0;i<link_bwc;i++)
    {
        int a,b;
        a=input.nextInt();
        b=input.nextInt();
        arr[i]=a;
        arr1[i]=b;
        g1.addEdge(a-1,b-1);
    }

    
   
   if( g1.test())
   {
          
     
   int k=arr[0];

     for(int i=0;i<link_bwc;i++)
     {
               if(k==arr[i])
               {
                   
                   System.out.print(arr[i]+" "+arr1[i]);
                     k=arr1[i];

               }
               else
               {
               
                 System.out.print(arr1[i]+" "+arr[i]);
                k=arr[i];
               }
               cout<<endl;
     }
   }
 
 
       
    }
}