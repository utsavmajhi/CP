#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
struct BST{
    int data;
    struct BST *left;
    struct BST *right;
};
typedef struct BST BSTNode;
BSTNode* GetNewNode(int data){
    BSTNode* newnode=(BSTNode*)malloc(sizeof(BST));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}


BSTNode* Insert(BSTNode* root,int data){
    if(root==NULL){
        root=GetNewNode(data);
        return root;
    }
    else{
        if(data<(root->data)){
            root->left=Insert(root->left,data);
            
        }else{
             root->right=Insert(root->right,data);
        }
    }
    return root;
}

BSTNode* InsertnewNode(BSTNode* root,BSTNode* node){
    if(root==NULL){
        root=node;
    }else{
        if(root->data>node->data){
            root->left=InsertnewNode(root->left,node);
        }
        else{
            if(root->data<node->data){
                root->right=InsertnewNode(root->right,node);
            }

        }
    }
    return root;
}



bool Search(BSTNode* root,int data){
    if(root==NULL){
     return false;   
    }
    if(root->data==data){
        return true;
    }else{
        
        if(data<(root->data)){
            return Search(root->left,data);
        }else{
            
            return Search(root->right,data);
        }
    }
    
}

//MINIMUM Element from tree

void minimumElement(BSTNode* root){
    while(root->left!=NULL){
        root=root->left;
    }
    cout<<"MINIMUM ELEMENT IN TREE: "<<root->data<<endl;
}

//Maximum Element from tree

void maximumElement(BSTNode* root){
    while(root->right!=NULL){
        root=root->right;
    }
    cout<<"MAXIMUM ELEMENT IN TREE: "<<root->data<<endl;
}

//PREORDER TRANSVERSAL
void preorderTransaversal(BSTNode* root){
    if(root!=NULL){
        cout<<root->data;
    }
    preorderTransaversal(root->left);
    preorderTransaversal(root->right);
    
}

//INORDER Transversal
void inorder_transversal(BSTNode* root){
    if(root!=NULL){
        inorder_transversal(root->left);
    }
    cout<<root->data<<" ";
    inorder_transversal(root->right);
}



int main(){
BSTNode* root=NULL;
BSTNode* headroot=NULL;
root=Insert(root,15);
Insert(root,10);
Insert(root,20);
Insert(root,25);
Insert(root,8);
Insert(root,12);
Insert(root,30);
Insert(root,35);
cout<<"Enter the number to be searched"<<endl;
int n;
cin>>n;
cout<<Search(root,n)<<endl;
minimumElement(root);
maximumElement(root);
//preorderTransaversal(root);(not working correctly)
//inorder_transversal(root);

//insert new element ;
headroot=GetNewNode(-1);
InsertnewNode(root,headroot);
headroot=GetNewNode(90);
InsertnewNode(root,headroot);
maximumElement(root);
minimumElement(root);

}