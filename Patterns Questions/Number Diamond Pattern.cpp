#include <bits/stdc++.h>
using namespace std;

void pat_print(int n, int s){
    for(int i=3; i<s+n; i++){
        for(int j=3; j<i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
}
  for(int i=s+n-1; i>=3; i--){
        for(int j=3; j<i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
}
}

int main() {
    // Write C++ code here
    int n,s;
    cin>>n>>s;
    pat_print(n,s);
    return 0;
}
