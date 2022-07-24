#include<bits/stdc++.h>

using namespace std;

class solution{
  // insert array into stack in revese order and check if the stack is empty if not then check if the elements in stack is less.
    public:
    vector<int> nextgreater(vector<int> &arr){
         stack<int> st;
         int n=arr.size();
        vector<int> nge(n,-1); // vector of all elements -1
    for(int i=2*n-1; i>=0; i--){
            //remove all elements in stack less than current element
        while(!st.empty() && st.top()<=arr[(i%n)]){
            st.pop();
        }
        // for current element, stack will have next highest element left all the less elements are removed.
        if(i<n){
            if(!st.empty()) {nge[i]=st.top();}
        }
      //add elements in stack
        st.push(arr[(i%n)]);

    }
    return nge;
}
};

int main(){

    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);

    vector<int> arr;
    
    int n; cin>>n;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        arr.push_back(x);
    }

    solution obj;
    vector<int> res = obj.nextgreater(arr);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }

}
