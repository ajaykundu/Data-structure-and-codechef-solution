#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
#include <map>
#include <list>
#include <algorithm>

using namespace std;

struct trees
{
	int data;
	 struct trees* left;
	 struct trees* rigth;
};

typedef struct trees treenode;

treenode* create_new_node(int val,treenode* left=NULL,treenode* rigth=NULL)
{
	treenode* newnode=(treenode*)malloc(sizeof(treenode));
	newnode->data=val;
	newnode->left=left;
	newnode->rigth=rigth;
    return newnode;
}

void insertbst(treenode** rootref,int val)
{
	if((*rootref)==NULL)
	{
		treenode* newnode=create_new_node(val);
		*rootref=newnode;
		return;
	}
	if((*rootref)->data>val)
	{
		insertbst(&((*rootref)->left),val);
	}
	else if((*rootref)->data<val)
		insertbst(&((*rootref)->rigth),val);
  else if((*rootref)->data==val)
    return;
}

void printinorder(treenode* root)
{
	if(root==NULL)
	{
		return;
	}

	printinorder(root->left);
	cout<<root->data<<" ";
	printinorder(root->rigth);
 

}

treenode* treeminimum(treenode* root)
{
	if(root==NULL)
	{
		return root;
	}
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root;
}

treenode* treemaximum(treenode* root)
{
	if(root==NULL)
	{
		return root;
	}
	while(root->rigth!=NULL)
	{
		root=root->rigth;
	}
	return root;
}

treenode* treesuccessor(treenode* root)
{
	if(root==NULL)
	{
		return root;
	}

	root=root->rigth;
	while(root->left!=NULL)
	{
		root=root->left;
	}

	return root;
}

void searchbyvalue(treenode* root,int search)
{
	if(root==NULL)
	{
		cout<<"the element is not present in the tree"<<endl;
		return;
	}
	if(root->data==search)
	{
		cout<<"yes this element is present in the tree"<<endl;
		return;
	}

	if(root->data>=search)
	{
		searchbyvalue(root->left,search);
	}
	else
		searchbyvalue(root->rigth,search);
}

int findheigth(treenode* root)
{   
	if(root==NULL)
	{
		return 0;
	}
    int leftheigth=1+findheigth(root->left);

    int rigthheigth=1+findheigth(root->rigth);
  return max(rigthheigth,leftheigth);
}

int max(int a,int b)

{
	if(a>=b)
	{
		return a;
	}
	return b;
}

int path[100];
void leafnode(treenode* root,int n=0)
{
	if(root==NULL)
	{    
		return ;
	}
	path[n]=root->data;

if((root->left)==NULL && (root->rigth)==NULL)
		{
		for(int i=0;i<=n;i++)
		{
			cout<<path[i]<<" ";
		}
		cout<<endl;
	}

	leafnode(root->left,n+1);
	leafnode(root->rigth,n+1);
return;
}

int println(treenode* root)
{
	  
	// cout<<"in the println";
	  if(root==NULL)
	  {
	  	return 0;
	  }
	if((root->left)==NULL && root->rigth==NULL){
         return 1;
       }
  int lm,rm;

     lm=    println(root->left);
	 rm=println(root->rigth);
    	if(rm || lm )
    	{
    		cout<<root->data<<" ";
    		
    	}
  return 0;  
}


void leafnodes(treenode* root)
{
	if(root==NULL)
		return;
	if((root->left)==NULL && root->rigth==NULL){
         cout<<root->data<<" ";
         return;
       }

       leafnodes(root->left);
       leafnodes(root->rigth);
  
}




// void top_view(treenode* root){
// 	left_top_view(root);
// 	rigth_top_view(root->rigth);
// }

void level_order_newline(treenode* root)
{   //cout<<"hello "<<endl;
	if(root==NULL)
		return ;
    queue<treenode*> q;
  stack<treenode*> s;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
          root=q.front();
          
          q.pop();

          if(root!=NULL)
          {
         // s.push(root);	
          	   cout<<root->data<<" ";
          	   if(root->rigth!=NULL)
          	   	q.push(root->rigth);
          	   if(root->left!=NULL)
          	   	q.push(root->left);
          }
          else
          {
          //	cout<<"hello"<<endl;
   cout<<endl;
          	
             if(!q.empty())
             {
             	q.push(NULL);
             }
          }
    }
cout<<endl;
  // while(!s.empty())
  // {
  // 	cout<<(s.top())->data<<" ";
  //   s.pop();
  // }

  //  cout<<"hello "<<endl;

}


void levelorder_newline1(treenode* root)
{
  if(root==NULL)
    return;
  queue<treenode*> p,q;

  p.push(root);
   int level=1;
    int anslevel=0;
    int maxsum=root->data;

  while(!q.empty() || !p.empty())
  {   
    cout<<"Level: "<<level<<endl;
         int tempsum=0;
        while(!p.empty())
        {
             treenode* temp=p.front();
             p.pop();
             cout<<temp->data<<" ";
              tempsum=tempsum+temp->data;
             if(temp->left!=NULL)
             {
                 q.push(temp->left);
             }
             if(temp->rigth)
             {
              q.push(temp->rigth);
             }
        }

        if(tempsum>maxsum)
        {
          anslevel=level;
          maxsum=tempsum;
        }
        tempsum=0;
        level++;
        cout<<endl;
        cout<<"Level: "<<level<<endl;
         while(!q.empty())
        {
             treenode* temp=q.front();
             q.pop();
             cout<<temp->data<<" ";
           tempsum=tempsum+temp->data;

             if(temp->left!=NULL)
             {
                 p.push(temp->left);
             }
             if(temp->rigth)
             {
              p.push(temp->rigth);
             }
        }
   if(tempsum>maxsum)
   {
    anslevel=level;
    maxsum=tempsum;
   }
        level++;
        cout<<endl;

  }

  cout<<"max sum level:"<<anslevel<<endl;
  cout<<"max sum:"<<maxsum<<endl;
}

void deepestNode1(treenode* root)
{   //cout<<"hello "<<endl;
	
  queue<treenode*> q;
  treenode* deep;
  q.push(root);

  while(!q.empty() && root!=NULL)
  {
  	root=q.front();
    deep=root;
  	q.pop();
  	if(root->left!=NULL)
  		q.push(root->left);
  	if(root->rigth)
  	q.push(root->rigth);
  }

  cout<<deep->data<<endl;

}

void rootc(treenode* root,int count=0)
{
	if(root==NULL)
		return;
	cout<<count<<endl;
	rootc(root->left,count+1);
	rootc(root->rigth,count+1);
}

int find_Full_Nodes(treenode* root)
{
	if(root==NULL)
		return 0;
	if(root->left!=NULL && root->rigth==NULL)
	{
		int left=find_Full_Nodes(root->left)+1;
		int rigth=find_Full_Nodes(root->rigth)+1;
		return left+rigth;
	}
	else
	{
       int left=find_Full_Nodes(root->left);
       int rigth=find_Full_Nodes(root->rigth);
       return left+rigth;
	}
}

int num_half_node(treenode* root)
{
	int count=0;
   queue<treenode*> q;
    if(root==NULL)
    	return count;
    q.push(root);

    while(!q.empty())
    {
    	root=q.front();
    	q.pop();
    	if((root->left!=NULL && root->rigth==NULL) || (root->left==NULL && root->rigth!=NULL) )
    	{
    		count++;
    	}
    	if(root->left!=NULL)
    		q.push(root->left);
    	if(root->rigth!=NULL)
    		q.push(root->rigth);

    }
return count;
}

int checkSameStrcuture(treenode* root1,treenode* root2)
{
	if(root1==NULL && root2==NULL)
		return 1;
	if(root1==NULL || root2==NULL)
		return 0;
	if(root1->data==root2->data)
	{
		checkSameStrcuture(root1->left,root2->left);
		checkSameStrcuture(root1->rigth,root2->rigth);
	}
	else
	{
		return 0;
	}
}

void top_viewC(treenode* root,map<int,pair<int,int> > & m,int v,int level)
    {
    
    if(root==NULL)
        return ;
    if(m.find(v)!=m.end() && level< m[v].second)
        {
        m[v].first=root->data;
        m[v].second=level;
    }else if(m.find(v)==m.end())
    {
    	m[v].first=root->data;
    	m[v].second=level;
    }

    top_viewC(root->left,m,v-1,level+1);
    top_viewC(root->rigth,m,v+1,level+1);
}

void top_view(treenode * root)
{
 map<int,pair<int,int> > m;
    top_viewC(root,m,0,0);
  
    map<int,pair<int,int> >::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
        {
        cout<<(itr->second).first<<" ";
    }
}


void left_veiw(treenode* root)
{   //cout<<"hello "<<endl;
  if(root==NULL)
    return ;
    queue<treenode*> q;
 
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";

    while(!q.empty())
    {
          root=q.front();
          
          q.pop();

          if(root!=NULL)
          {
         
              // cout<<root->data<<" ";
               if(root->left!=NULL)
                q.push(root->left);
               if(root->rigth!=NULL)
                q.push(root->rigth);
          }
          else
          {
          //  cout<<"hello"<<endl;
   //cout<<endl;
            
             if(!q.empty())
             {  

               cout<<(q.front())->data<<" ";
              q.push(NULL);
             }
          }
    }
   cout<<endl;
}


void top_viewCd(treenode* root,map<int,pair<int,int> > & m,int v,int level)
    {
    
    if(root==NULL)
        return ;
    if(m.find(v)!=m.end() && level> m[v].second)
        {
        m[v].first=root->data;
        m[v].second=level;
    }else if(m.find(v)==m.end())
    {
      m[v].first=root->data;
      m[v].second=level;
    }

    top_viewCd(root->left,m,v-1,level+1);
    top_viewCd(root->rigth,m,v+1,level+1);
}

void bo_view(treenode * root)
{
 map<int,pair<int,int> > m;
    top_viewCd(root,m,0,0);
  
    map<int,pair<int,int> >::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
        {
        cout<<(itr->second).first<<" ";
    }
}


void rigth_veiw(treenode* root)
{   //cout<<"hello "<<endl;
  if(root==NULL)
    return ;
    queue<treenode*> q;
 
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";

    while(!q.empty())
    {
          root=q.front();
          
          q.pop();

          if(root!=NULL)
          {
         
              // cout<<root->data<<" ";
            if(root->rigth!=NULL)
                q.push(root->rigth);
               if(root->left!=NULL)
                q.push(root->left);
               
          }
          else
          {
          //  cout<<"hello"<<endl;
   //cout<<endl;
            
             if(!q.empty())
             {  

               cout<<(q.front())->data<<" ";
              q.push(NULL);
             }
          }
    }
   cout<<endl;
}

void rigth_veiwRAux(treenode* root,int level,int &maxlevel)
{
    if(root==NULL)
      return;
    if(level>maxlevel)
    {
      cout<<root->data<<" ";
      maxlevel=level;
    }
    rigth_veiwRAux(root->rigth,level+1,maxlevel);
    rigth_veiwRAux(root->left,level+1,maxlevel);
}

void rigth_veiwR(treenode* root)
{
  int maxlevel=0;
  rigth_veiwRAux(root,1,maxlevel);
}

int max1(int left,int rigth)
{
  return left>rigth?left:rigth;
}

int diameterTree(treenode* root,int * ptr)
{
  if(root!=NULL)
    return 0;
  int left,rig;
   left=diameterTree(root->left,ptr)+1;
   rig=diameterTree(root->rigth,ptr)+1;
   if(left+ rig >  *ptr)
    *ptr=left+rig;

  return max(left+rig,*ptr) +1;
}

int treeHeight(treenode *root)
{
  if(root==NULL)
  {
    return 0;
  }

int leftHeight=treeHeight(root->left)+1;
int rigthHeight=treeHeight(root->rigth)+1;

return max(leftHeight,rigthHeight);

}



int treeDiameterAux(treenode* root, int* height)

{
   
}

int treeDiameter(treenode* root)
{
  if(root==NULL)
    return 0;
  return treeDiameterAux(root,0);
}

void printpathutil(treenode* head,int v[],int level)
{
  if(head==NULL)
    return;
  v[level]=head->data;

  if(head->left==NULL && head->rigth==NULL)
  {
       for(int i=0;i<=level;i++)
       {
        cout<<v[i]<<"->";
       }
       cout<<endl;
  }
  printpathutil(head->left,v,level+1);
  printpathutil(head->rigth,v,level+1);
}


void printpath(treenode* head)
{
//  cout<<"hello"<<endl;
     int arr[5];

     printpathutil(head,arr,0);
}

void printpathrecurutil(treenode* root,int path[],int pathlen,int givensum)
{
    if(root==NULL)
      return;
    path[pathlen]=root->data;
    pathlen++;

    if(root->left==NULL && root->rigth==NULL)
    {
      int sum=0;
      for(int i=0;i<pathlen;i++)
      {
        cout<<path[i]<<"-";
        sum=sum+path[i];
      }

      cout<<endl;
      if(sum==givensum)
      {
        cout<<"yes"<<endl;
        return ;
      }
    }
    

    printpathrecurutil(root->left,path,pathlen,givensum);
    printpathrecurutil(root->rigth,path,pathlen,givensum);
}

void printpathrecur(treenode* root,int givensum)
{
     int arr[5];
     printpathrecurutil(root,arr,0,givensum);
}

bool hasPathSum(treenode* root,int sum)
{
      if(root==NULL)
        return sum==0;
      else
      {     int ans=0;
           int subsum=sum-root->data;
           cout<<root->data<<" ";
           if(subsum==0 && root->left==NULL && root->rigth==NULL)
            return 1;

          if(root->left!=NULL)
          {
               ans=ans || hasPathSum(root->left,subsum);
          }
          if(root->rigth!=NULL)
            ans=ans || hasPathSum(root->rigth,subsum);
          return ans;
      }
}

int sumTree(treenode* root)
{
  if(root==NULL)
    return 0;
  return root->data + sumTree(root->left) + sumTree(root->rigth);
}

int sumTreeL(treenode* root)
{
     if(root==NULL)
      return 0;

    queue<treenode*> q;
    q.push(root);
    int sum=0;
    while(!q.empty())
    {
          treenode* temp=q.front();
          q.pop();
          sum=sum+temp->data;
          if(temp->left!=NULL)
            q.push(temp->left);
          if(temp->rigth!=NULL)
            q.push(temp->rigth);
    }

   
    return sum;

}

treenode* MirrorBT(treenode* root)
{
  treenode* temp;
  if(root!=NULL)
  {
      MirrorBT(root->left);
      MirrorBT(root->rigth);
      temp=root->rigth;
      root->rigth=root->left;
      root->left=temp;

  }
  return root;

}

int checkingMirror(treenode* root1,treenode* root2)
{
      
}

// int leastCommonAnsterUtil(treenode* root,int a,int b,int &first,int &second)
// {
//      if(root==NULL)
//       return 0;
//     if(first==1 && second==1)
//       return root->data;
//     int ans=0;
//     ans=leastCommonAnsterUtil(root->left,a,b,first,second);
//     ans=leastCommonAnsterUtil(root->rigth,a,b,first,second);
    
//     if(root->data==a)
//       first=1;
//     if(root->data==b)
//       second=1;

//     return ans;
//  }

// int leastCommonAnster(treenode* root,int a,int b)
// {    
//     int ans=0;
//     int first=0;
//     int second=0;
//      ans= leastCommonAnsterUtil(root,a,b,first,second);
//      return ans;
// }

int findPathofNodeUtil(treenode* root,int val,int arr[],int level,int& length)
{
       if(root==NULL)
       {
          return 0;
       }

       arr[level]=root->data;
       if(root->data==val)
       {
         length=level;
        return 1;
       }
       int ans=0;
       level++;
       ans=ans || findPathofNodeUtil(root->left,val,arr,level,length);
       ans=ans || findPathofNodeUtil(root->rigth,val,arr,level,length);

       return ans;
}

void findPathofNode(treenode* root,int val)
{
     int height=treeHeight(root);

     int arr[height];
     int i=0;
      int length=0;
     findPathofNodeUtil(root,val,arr,i,length);
     cout<<i<<endl;
      for(int j=0;j<=length;j++)
      {
        cout<<arr[j]<<"-";
      }
      cout<<endl;
     //return arr;

}

// int heightUtil(treenode* root,int v,int level )
// {
//      if(root==NULL)
//       return 0;
//      if(root->data == v)
//       return level;
//     he

// }


// int height(treenode* root,int v)
// {
//     return heightUtil(root,v,1);
// }


treenode* findLCA(treenode* root,int n1,int n2)
{
     //this is for the base case.
  if(root==NULL) return NULL;

  if(root->data==n1) return root;
  if(root->data==n2) return root;

  treenode* left_lca=findLCA(root->left,n1,n2);
  treenode* right_lca=findLCA(root->rigth,n1,n2);
  if(left_lca!=NULL && right_lca!=NULL)
  {
    return root;
  }
  else
        if(left_lca!=NULL)
          return left_lca;
        else if(right_lca!=NULL)
        {
          return right_lca;
        }



}

treenode* predecessor(treenode* root)
{
   root=root->left;
   while(root->left!=NULL)
   {
    root=root->rigth;
   }
   return root;
}

void deleteNode(treenode** rootref,int val)
{
     if(*rootref==NULL)
      return;

    if((*rootref)->data > val)
    {
        deleteNode(&(*rootref)->left,val);
    }
    else if((*rootref)->data < val)
    {
        deleteNode(&(*rootref)->rigth,val);
    }
    else {
            if((*rootref)->left==NULL && (*rootref)->rigth==NULL)
            {
                  (*rootref)=NULL;   //case 1 : for leaf node.
            }
            else if((*rootref)->left!=NULL && (*rootref)->rigth==NULL)
            {
                  (*rootref)=(*rootref)->left; //case 2: for only left child.

            }
            else if((*rootref)->rigth!=NULL && (*rootref)->left==NULL)
            {
                 (*rootref)=(*rootref)->rigth;   //case 3: for only rigth child.
            }
            else 
            {                    // case 4 : have both the child.
                  treenode* newnode=predecessor(*rootref);
                  int newval=newnode->data;

                  (*rootref)->data=newnode->data;
                   deleteNode(&(*rootref)->left,newval);
                  
            }
    }
}

treenode* lcabst(treenode* root,int a,int b)
{    

       if(true){

       }
     if(root->data > a && root->data >b)
     {
         lcabst(root->left,a,b);
     }

     if(root->data<a && root->data <b)
     {
        lcabst(root->rigth,a,b);
     }

     
}

void  veticaltraversalutil(treenode* root,map<int,vector<pair<int,int> > > & m,int level,int verticaldec)
{
      if(root==NULL)
        return;

      m[verticaldec].push_back(make_pair(level,root->data));

      veticaltraversalutil(root->left,m,level+1,verticaldec-1);
      veticaltraversalutil(root->rigth,m,level+1,verticaldec+1);

}

vector<vector<int> > veticaltraversal(treenode* root)
{
     map<int,vector<pair<int,int> > > m;
     
      veticaltraversalutil(root,m,0,0);
      
      map<int,vector<pair<int,int> > >::iterator mitr;
      vector<vector<int> > v;

      for(mitr=m.begin();mitr!=m.end();mitr++)
      {
           vector<pair<int,int> >::iterator vitr;
          sort((mitr->second).begin(),(mitr->second).end());
           std::vector<int> temp;
           for(vitr=(mitr->second).begin();vitr!=(mitr->second).end();vitr++)
           {
                  temp.push_back(vitr->second);
                //  cout<<vitr->second<<" ";
           }
           //cout<<endl;
           v.push_back(temp);
      }

    return v;
}

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


struct node
{
  int data;
  struct node* next;
};

typedef struct node node;

node* createnewnode(int data,node* next=NULL){
  
  node* newnode=(node*)malloc(sizeof(node));
  newnode->data=data;
  newnode->next=next;
  return newnode;
  
}



void print(node* head)
{
  node* ptr=head;
  while(ptr!= NULL )
  {
    printf("%d ",ptr->data);
    ptr=ptr->next;
  }
  cout<<endl;
}

int length(node* head)
{
  node* ptr=head;
  int count=0;
  while(ptr!=NULL)
  {
    count++;
    ptr=ptr->next;
  }
  return count;
}

void addfront(node **headref,int data){
  node* newnode=createnewnode(data,NULL);
  newnode->next=*headref;
  *headref=newnode;
  
}

void addend(node **headref,int data)
{
  node* newnode=createnewnode(data,NULL);
  node* ptr=*headref;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  ptr->next=newnode;
}



void removefront(node **headref)
{
  *headref=(*headref)->next;
}

void removeEnd(node **headref)
{
  int lengthl=length(*headref);
  node* ptr=*headref;
  for(int i=0;i<lengthl-2;i++)
  {
    ptr=ptr->next;
  }
  ptr->next=NULL;
}


void removeend2(node* &head)
{
  if(head==NULL)
    return;
  if(head->next==NULL)
  {
    head=NULL;
    return;
  }
  while(head->next->next!=NULL)
  {
    head=head->next;
  }
  head->next=NULL;
}


node* Reverse(node *head)
{
  // Complete this method
    node* current=head;
    node* prev=NULL;
    node* nextt;
    
    while(current!=NULL)
        {
          nextt=current->next;
        current->next=prev;
        prev=current;
        current=nextt;
    }
    
    return prev; 
}

node* ReverseRec(node* head,node* prev=NULL)
{     
         if(head->next==NULL)
         {
          head->next=prev;
          return head;
         }

     node* temp=head->next;
     head->next=prev;
     prev=head;
     return ReverseRec(temp,prev);
}

void deletebyvalue(node* head,int data)
{
  node* prev=NULL;
    node* ptr=head;
   
  while(ptr->next!=NULL)
  {
    if(ptr->data==data)
    {
    
    prev->next=ptr->next;
      prev=ptr;
    ptr=ptr->next;
    
    }
    else
    {
      prev=ptr;
      ptr=ptr->next;
    }
  }
}

void replacevalue(node* head,int data,int newdata)
{
  node* ptr=head;
  while(ptr->next!=NULL)
  {
    if(ptr->data==data)
    {
      ptr->data=newdata;
    }
    ptr=ptr->next;
  }
}



// node* RemoveDuplicates(node *head)
// {
//   // This is a "method-only" submission. 
//   // You only need to complete this method. 
//     if(head==NULL)
//         {
//         return head;
//     }
    
//     node* final=NULL;

//     while(head!=NULL)
//     {
//      if(head->data==(head->next)->data)
//      {
//        addend(&final,head->data,(head->next))
//      }
//     }
    
    
// }


void rotateLeft(node* &head,int k)
{
  if(head==NULL)
  {
  return;
  }

  node* prev=NULL;
  node* current=head;
  while(k--)
  {
    prev=current;
    current=current->next;
  }
  while(current->next != NULL)
  {
    current=current->next;
  }
    current->next=head;
    head=prev->next;
    prev->next=NULL;
}

node* sumLinkList(node* l1,node* l2)
{
  node* head=NULL;
  int carry=0;  int sum=0;

  while(l1!=NULL || l2!=NULL || carry!=0)
  {
    sum=carry;
    if(l1!=NULL)
    {
      sum=sum+l1->data;
      l1=l1->next;

    }
    if(l2!= NULL)
    {
      sum=sum+l2->data;
      l2=l2->next;
    }
    if(head==NULL)
    {
      head=createnewnode(sum%10,NULL);
    }
    else
    {
      addend(&head,sum%10);
    }
     //cout<<carry<<" "<<sum<<endl;
    if(sum>9)
    {
      carry=1;
    }
    else
    {
      carry=0;
    }
     sum=0;


  }
  return head;
}



void rightrotation(node* &head,int k)
{
  if(head==NULL)
    return;

  node* slow=head;
  node* fast=head;

  while(k--)
  {
    fast=fast->next;
  }
  while(fast->next !=NULL)
  {
    fast=fast->next;
    slow=slow->next;
  }
  fast->next=head;
  head=slow->next;
  slow->next=NULL;
}

// node* createnewnode(int val)
//     {
//     node* newnode=(Node *)malloc(sizeof(Node));
//     newnode->data=val;
//     newnode->next=NULL;
//     return newnode;
// }

void addelement(node ** headref,int val)
    {
           if(*headref==NULL)
               {
               node* newnode=createnewnode(val,NULL);
               *headref=newnode;
               return;
           }
        addelement(&(*headref)->next,val);
    
}

node* MergeLists(node *headA, node* headB)
{
  // This is a "method-only" submission. 
   // You only need to complete this method 
       if(headA==NULL && headB==NULL)
        return NULL;
       else if(headA==NULL)
        return headB;
       else if(headB==NULL)
        return headA;
   node* head=NULL;

   if(headA->data <= headB->data)
   {
         head=headA;
         headA=headA->next;
         head->next=NULL;
   }else {
    head=headB;
    headB=headB->next;
    head->next=NULL;
   }

   print(head);

   node* returnHead=head;

    while(headA!=NULL || headB!=NULL)
    {

      if(headA!=NULL && headB!=NULL)
      {
            if(headA->data <= headB->data)
            {
              node* newnode=createnewnode(headA->data);
              head->next=newnode;
              headA=headA->next;
              head=head->next;
            }
            else
            {
              node* newnode=createnewnode(headB->data);
              head->next=newnode;
              headB=headB->next;
              head=head->next;
            }
      }
      else if(headA!=NULL)
      {
        head->next=headA;
        headA=NULL;
      }
      else if(headB!=NULL)
      {
        head->next=headB;
        headB=NULL;
      }
    }
   return returnHead;
       
}


node* mergeSort(node* head)
{
  if(head->next->next==NULL)
  {
         if(head->data > head->next->data)
         {
         int temp=head->data;
         head->data=head->next->data;
         head->next->data=temp;
     }
         return head;
  }

  node* slowptr=head;
  node* fastptr=head;

  while(fastptr->next!=NULL)
  {
    slowptr=slowptr->next;
    fastptr=fastptr->next;
    if(fastptr->next==NULL){
            break;
    };
    fastptr=fastptr->next;

  }
       node*  l2=mergeSort(slowptr->next); 
  slowptr->next=NULL;
  node* l1=mergeSort(head);
    return MergeLists(l1,l2);

}

node* MergeLists1(node *headA, node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    node* result=NULL;
    if(headA==NULL)
        return headB;
    if(headB==NULL)
        return headA;
    
    if(headA->data <= headB->data)
        {
        result=headA;
        result->next=MergeLists1(headA->next,headB);
    }
    else{
        result=headB;
        result->next=MergeLists1(headA,headB->next);
    }
    return result;
    
    
}

void enqueue(node* &head,node* &tail,int data)
{
  node* newnode=createnewnode(data);
  if(head==NULL && tail==NULL)
  {
     head=newnode;
     tail=newnode;
     return;
  }
  
  tail->next=newnode;
  tail=tail->next;

}

void dequeue(node* &head,node* &tail)
{
  if(head==NULL)
  {
    cout<<"queue is empty."<<endl;
    return;
  }
  node* delnode=head;
  head=head->next;
  if(head==NULL)
    tail=NULL;
  delete delnode;
}

int front(node* head)
{
  if(head==NULL)
  {  
    cout<<"queue is empty."<<endl;
    return -1;
}
   return head->data;
}

node* concate(node* first,node* second)
{
     node* head=NULL;
     node* current=NULL;
      
      if(first==NULL && second==NULL)
      {
        return NULL;
      }

     if(first!=NULL)
      {
            node* newnode=createnewnode(first->data);
            head=newnode;
            current=head;
            first=first->next;

            while(first!=NULL)
            {
                  node* newnode=createnewnode(first->data);
                  current->next=newnode;
                  current=current->next;
                  first=first->next;
            }
      }
     if(current!=NULL)
     {
         while(second!=NULL)
         {
          //cout<<"hello";
              node* newnode=createnewnode(second->data);

              current->next=newnode;
              current=current->next;
              second=second->next;
         }
     }else
     {
           node* newnode=createnewnode(second->data);
           head=newnode;
           current=head;
           second=second->next;
           while(second!=NULL)
           {
               node* newnode=createnewnode(second->data);
               current->next=newnode;
               current=current->next;
               second=second->next;
           }
     }

     return head;
}

// template<typename t>
// class stack
// {
//   t arr[30];
//   int top1;
//   int capacity;
// public:
//   stack(){
//     top1=0;
//     capacity=5;
//   }
//    void push(t data);   // for the pushing of the function.
//    void pop();
//    t top();
//    int isEmpty();
//    int overflow();
//    int underflow();
  
  
// };


// template<typename t>
// int stack<t>::overflow()
// {
//     if(top1>=capacity)
//     {
//       return 1;
//     }
//     return 0;
// }

// template<typename t>
// int stack<t>::underflow()
// {
//        if(top1<=0)
//        {
//         return 1;
//        }
//        return 0;
// }
// template<typename t>
// void stack<t>::push(t data)
// {
//        if(overflow())
//        {
//           cout<<"The stack is full."<<endl;
//        }
//        else
//        {
//            arr[top1]=data;
//            top1++;
//        }
// }
// template<typename t>
// void stack<t>::pop()
// {
//     if(underflow())
//     {
//       cout<<"The stack is empty."<<endl;
//     }
//     else
//     {
//       top1--;
//     }
// }
// template<typename t>
// t stack<t>::top(){
//          if(underflow())
//          {
//           cout<<"The stack is empty."<<endl;
//           return -1;

//          }
//          else{
//           cout<<"hello world"<<endl;
//           cout<<top1<<endl;
//               return arr[top1-1];
//          }
// }




int main(int argc, char const *argv[])
{
	/* code */

	treenode* root=NULL;
  treenode* root2=NULL;
     insertbst(&root,13);
     insertbst(&root,10);
     insertbst(&root,11);
     insertbst(&root,8);
     insertbst(&root,14);
     insertbst(&root,16);
     insertbst(&root,17);
     //insertbst(&root,15);
     insertbst(&root,12);
     insertbst(&root,18);
    

      insertbst(&root2,13);
     insertbst(&root2,10);
     insertbst(&root2,11);
     insertbst(&root2,8);
     insertbst(&root2,14);
     insertbst(&root2,16);
     insertbst(&root2,17);

    vector<std::vector<int> > v;
    v=veticaltraversal(root);
     

   
	return 0;
}

