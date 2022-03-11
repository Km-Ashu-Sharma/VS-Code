#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
int main()
{
  Node *root=new Node (10) ;
  root->left=new Node(20);
  root->right=new Node(50);
  cout<<root->key;
  cout<<root->left->key;
  cout<<root->right->key;

  

}