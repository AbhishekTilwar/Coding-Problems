#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n, amg=0;
  int orignial_n=n;
  cin>>n;
  while(n>0){
      int lastdigit=n%10;
      amg+=pow(lastdigit,3);                                     
      n=n/10;
      }
    if(amg==orignial_n) cout<<"Armstrong Number"<<endl;

    else cout<<"Not a Armstrong Number"<<endl;
}
