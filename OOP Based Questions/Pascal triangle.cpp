#include <iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

int combn( int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
  int a;
  cin>>a;
  for(int i=0; i<a; i++) {
      for(int j=0; j<=i;j++){
          cout<<combn(i,j)<<" ";
      }
      cout<<endl;
  }
}

/*

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 

*/
