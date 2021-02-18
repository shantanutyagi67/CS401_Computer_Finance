#include<bits/stdc++.h>
using namespace std;
struct Node {
    double data;
    struct Node* left;
    struct Node* right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void discover(double s0,double u,double d,double k, double r,double n, Node* root)
{
    if(n==0);
        //return;      
    else if(n>=1)
    {
        root->right = new Node(max(d*s0-k,(double)0));
        discover(s0*d,u,d,k,r,n-1,root->right);
        
        root->left = new Node(max(u*s0-k,(double)0));
        discover(s0*u,u,d,k,r,n-1,root->left);
    }
}
void printGivenLevel(Node* root, int level) 
{ 
    if (level == 0) 
        cout<<setprecision(6)<<fixed<<root->data<<" "; 
    else if (level >= 1) 
    { 
        printGivenLevel(root->left, level-1); 
        printGivenLevel(root->right, level-1); 
    } 
} 
void calc(Node* root, int level, double u,double d,double r) 
{ 
    if (level == 0) 
        root->data = (((double)((double)1+r-d)/(double)(u-d))*root->right->data + (double)(-(double)1-r+u)/(double)(u-d)*(root->left->data)) / (double)((double)1+r);
    else if (level >= 1) 
    { 
        calc(root->left, level-1, u, d, r); 
        calc(root->right, level-1, u, d, r); 
    } 
}
int main()
{
    double s0,u,d,k,r;
    int n;
    cin>>s0>>u>>d>>k>>r>>n;
    struct Node* root = new Node(s0);
    discover(s0,u,d,k,r,n,root);
    for (int i=n-1; i>=0; i--) 
    { 
        calc(root, i, u, d, r); 
    } 
    for (int i=0; i<=n; i++) 
    { 
        printGivenLevel(root, i); 
        printf("\n"); 
    } 
    return 0;
}
