#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n=1234, reverse=0;
  cin>>n;

  while(n>0){
      int lastdigit=n%10;
      reverse=reverse*10+lastdigit;
      n=n/10;
      }
 cout<<reverse;
}
