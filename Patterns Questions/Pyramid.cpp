#include <bits/stdc++.h>
using namespace std;
void pPrint(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<(n-i); j++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    pPrint(n);

    return 0;
}
