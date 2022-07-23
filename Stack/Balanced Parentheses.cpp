#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    stack<char> st;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            st.push(str[i]);
        }
        else{
            if(st.size()==0){
                cout<<"empty";
                return 0;
            }
            char ch = st.top();
            st.pop();
            if(str[i]==')' && ch=='(' || str[i]=='}' && ch=='{' || str[i]==']' && ch=='['){
               continue;
            }
            else{
                cout<<"unbalanced";
                return 0;
            }
        }
    }

    if(st.empty()){
        cout<<"Balanced";
    }
    return 0;
}
