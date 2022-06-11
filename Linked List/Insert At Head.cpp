#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=next;
    }
};

void insertathead(node* &head, int data){

    node* temp = new node(data);
    temp->next=head;
    head=temp;
}

void print(node* &head){

    node* t = head;

    while(t!=NULL){
        cout<<t->data;
        t=t->next;
    }
}
int main(){

    node* head=NULL;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
    insertathead(head,x);
    }
    print(head);

}
