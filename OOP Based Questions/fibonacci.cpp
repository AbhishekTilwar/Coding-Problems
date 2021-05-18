#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n,t1=0,t2=1;
  int next_term;
  cin>>n;
    for(int i=0;i<n;i++){
        cout<<t1<<endl;
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
               
}
