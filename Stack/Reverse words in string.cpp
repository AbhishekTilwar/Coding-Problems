//Stack Approach
#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    str+=" ";
    stack<string> st;
    string temp="";
    
    for(int i=0; i<str.length(); i++){
        
        if(str[i]==' '){
            st.push(temp);
            temp="";
        }
        else{
            temp+=str[i];
        }
    }
    string ans="";
    while(st.size()>=1)
    {
     ans+=st.top()+" ";
     st.pop();
    }
    cout<<ans;
    return 0;
}
