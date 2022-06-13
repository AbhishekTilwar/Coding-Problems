#include<bits/stdc++.h>

using namespace std;

struct node{

    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertattail(node* &tail, int data){
    node* temp = new node(data);
    tail->next=temp;
    tail=tail->next;
}

void insertAtPosition(node* &head, int data, int pos){
    node* temp = new node(data);
    node* t = head;
    int cnt = 1;

    while(cnt!=pos){
        t=t->next;
        cnt++;
    }

    temp->next=t->next;
    t->next=temp;

}

void print(node* &head){

    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    node* node1= new node(10);
    node* head = node1;
    node* tail = node1;

    insertattail(tail, 42);
    insertattail(tail, 92);
    insertattail(tail, 12);
    
    insertAtPosition(head, 32, 2);
    print(head);
}
