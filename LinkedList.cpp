#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};
struct node* createnode(int data) {
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=nullptr;
    
    return newnode;
};

void displayll(struct node*) {
    cout<<"Linked List is as follows:"<<endl;
    
};
int main() {
    
    cout << "Linked List:"<<endl;
    node* head=nullptr;
    
    node* node1=createnode(5);
    head=node1;
    node* temp=head;
    node* node2=createnode(6);
    node1->next=node2;
    while (temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    

    return 0;
}