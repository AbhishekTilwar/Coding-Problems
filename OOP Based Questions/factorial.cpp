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
