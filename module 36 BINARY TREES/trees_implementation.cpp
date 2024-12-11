#include<iostream>
#include<math.h>
#include<climits>


using namespace std;

class Node{
    public:
    int val;
    Node* right;
    Node* left;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};

void displayTree(Node* root){
    if(root==NULL) return ;

    cout<<root->val<<"  ";

    displayTree(root->right);
    displayTree(root->left);

}

int sum(Node* root){
        if(root==NULL) return 0; 

       return root->val + sum(root->left) + sum(root->right);

}

int siz(Node* root){
    if(root==NULL) return 0;

    return 1+siz(root->left) + siz(root->right);
}

int more(Node* root){
    if(root==NULL) return INT_MIN;

    return max(root->val,max(more(root->left),more(root->right)));

}

int level(Node* root){
    if(root==NULL) return 0;

    return 1+max(level(root->left),level(root->right));
}

int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;


    displayTree(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<siz(a)<<endl;
    cout<<more(a)<<endl;
    cout<<level(a)<<endl;

return 0;
}