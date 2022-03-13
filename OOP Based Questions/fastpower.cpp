
#include <bits/stdc++.h>
using namespace std;

int fastpow(int a, int b){
    int res=1;

    while(b>0){

        /* a^b = (a^2)^b/2 if b is even
               =  a*a^b-1 if b is odd */
    if((b&1)!=0){
        res=res*a;
    }

    a=a*a;
    b=b>>1;
    }
    return res;
}

int main(){

int a,b;
cin>>a>>b;
cout<<fastpow(a,b);
}
