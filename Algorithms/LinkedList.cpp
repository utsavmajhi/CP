#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;
struct person{
        int x;
        struct person *next;
    };
    typedef struct person Node;

    //creating Nodes
    Node* create_node(int data){
        Node* temp=(Node*)malloc(sizeof(Node));
        temp->x=data;
        temp->next=NULL;
        return temp;
    }

    //creating linked list using loops
    Node* create_linkedList(int n){
        Node* head=create_node(1);
        Node* tail=head;
        Node* current =NULL;
        for(int i=2;i<=n;i++){
            current=create_node(i);
            tail->next=current;
            tail=current;
        }
        return head;
    }

    //inserting new node at beginning
    Node* insert_node_at_begin(Node* head){
        Node* newnode=create_node(8);
        newnode->next=head;
        head=newnode;
        return head;
    }
    //insesrt new node at last of linked list
    void insert_node_at_last(Node* head){
        Node* newnode=create_node(6);
        Node* iterator=head;
        while(iterator->next!=NULL){
            iterator=iterator->next;
        }
        iterator->next=newnode;
    }
    //insert new node in nth position
    void insert_node_at_nthpos(Node* head,int n){
        Node* newnode=create_node(5);
        Node*positionnode=head;
        for(int i=1;i<n-1;i++){
            positionnode=positionnode->next;
        }
    }

    //print all data in all the nodes
    void print_list(Node* head){
        Node* iterator=head;
        while(iterator!=NULL){
            cout<<iterator->x<<" ";
            iterator=iterator->next;
        }
    }
int main(){
    //created linked list
    Node* head=create_linkedList(3);
    print_list(head);
    cout<<endl;
    //inserting new node at begiining of linked list
    head=insert_node_at_begin(head);
    print_list(head);

    //inserting new node at last of linked list
    cout<<endl;
    insert_node_at_last(head);
    print_list(head);

    //inserting new node at nth pos
    cout<<endl;
    insert_node_at_nthpos(head,3);//lets try for n=3
    print_list(head);


}