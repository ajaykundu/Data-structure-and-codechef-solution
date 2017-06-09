#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */


/* DO NOT MODIFY THIS STRUCTURE */
struct node
{
    int info;
    node* left;
    node* right;
};


void bottom_viewAux(node* root,map<int,pair<int,int> > & m,int v,int level)
    {
    
    if(root==NULL)
        return ;
    if(m.find(v)!=m.end() && level>= m[v].second)
        {
        m[v].first=root->info;
        m[v].second=level;
    }else if(m.find(v)==m.end())
    {
      m[v].first=root->info;
      m[v].second=level;
    }

    bottom_viewAux(root->left,m,v-1,level+1);
    bottom_viewAux(root->right,m,v+1,level+1);
}

void bottom_view(node * root)
{
 map<int,pair<int,int> > m;
    bottom_viewAux(root,m,0,0);
  
    map<int,pair<int,int> >::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
        {
        cout<<(itr->second).first<<" ";
    }
}



/* Tail starts here */
node* createNewNode(int info);
void createTree(node* &root, int arr[], int i, int n);
int main() {
    int n;
   cin>>n;

   int arr[n+1];
   int i=0;
   while(cin>>arr[++i]);
   
   node* root;
   createTree(root, arr, 1, n);

   bottom_view(root);
    return 0;
}



node* createNewNode(int info)
{
   node* root = new node();
   root->info = info;
   root->left = NULL;
   root->right = NULL;

   return root;
}

void createTree(node* &root, int arr[], int i, int n)
{
   if(i>n)
      return;

   if(arr[i] != -1){
      root = createNewNode(arr[i]);
      createTree(root->left, arr, i*2, n);
      createTree(root->right, arr, i*2 +1, n);
   }
   return;
}
