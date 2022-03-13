//Using Recursion
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1){
        return n;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}


//Normal Approach using loop
#include <iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
  int n;
  cin>>n;
  cout<<fact(n)<<endl;              
}



// [Use of Fact() in Formula]
// Code for nCr or combinational formula using factorial

#include <iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
  int n,r;
  cin>>n>>r;
  cout<<fact(n)/(fact(n-r)*fact(r));
               
}
