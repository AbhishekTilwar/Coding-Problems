#include<bits/stdc++.h>
using namespace std;

int power(int base, int n){
    
    int res=1;
    if(n!=0){
       return base*power(base, n-1);
    }
    else{
        return res;
    }

}

int main(){

int base,n; //a^b
cin>>base>>n;

int res;
  
// n is positive & base is +ve or -ve
if(n>=0){
    res=power(base,n);
    cout<<res;
}
  //n is negative
else if(n<0){
    int r=(-1)*n;
    res=power(base,r);
    cout<<1.0/res;
}

return 0;
}
