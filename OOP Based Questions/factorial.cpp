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
