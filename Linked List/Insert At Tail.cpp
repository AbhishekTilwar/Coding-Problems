// Online C++ compiler to run C++ program online
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

void insertAttail(node* &tail, int data){

    node* temp = new node(data);
    tail->next=temp;
    tail=tail->next;

}

void print(node* &head){

    node* t = head;

    while(t!=NULL){
        cout<<t->data<<endl;
        t=t->next;
    }
}


int main(){
    node* new_node= new node(10);
    node* head=new_node;
    node* tail=new_node;

    insertAttail(tail,12);

    // different values
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        insertAttail(tail, x);
    }
    
    print(head);
    return 0;
}
