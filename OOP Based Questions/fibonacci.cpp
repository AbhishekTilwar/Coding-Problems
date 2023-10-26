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


// Storing & Printing
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a=0,b=1;
    vector<int> arr;
    int n ; cin>>n;

    arr.push_back(a);
    arr.push_back(b);
    for(int i=2; i<n; i++){
     
      int next_term=a+b;
      a=b;
      b=next_term;
      arr.push_back(next_term);
    }

    for(int i=0; i<n; i++){
      cout<<arr[i]<<endl;
    }
}
