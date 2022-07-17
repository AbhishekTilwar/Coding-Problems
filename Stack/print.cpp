#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<int> arr){
    if(arr.empty()){
        return;
    }
    int x=arr.top();
    arr.pop();
    
    print_stack(arr);
    
    cout<<x<<" ";
    arr.push(x);
}

int main() {
    // Write C++ code here
    stack<int> arr;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push(x);
    }
    print_stack(arr);
    
    return 0;
}
