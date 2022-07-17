#include <bits/stdc++.h>
using namespace std;

//Important to remember is array, size for checking empty, top=-1
class Stack{
    public:
    int *arr;
    int size;
    int top;
    
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    
    //Push operation
    void push(int elem){
        if(size-top>1){   //Important step if not empty, where top starts from zero and size n
            top++;
            arr[top]=elem;
        }
        else{
            cout<<"Stack OverFlow";
        }
    }
    //Pop operation
    void pope(){
        if(size-top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow";
        }
    }
    
    // Top of Stack
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack Empty";
        }
    }
    
    // Check Empty
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    // Write C++ code here
    
    Stack s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<<s.peek()<<endl;
    s.pope();
    cout<<s.peek()<<endl;
    
    if(s.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    s.pope();
    s.pope();
    if(s.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    s.push(23);
    cout<<s.peek();
    return 0;
}
