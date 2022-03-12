//GCD - Greatest Common Divisor = HCF
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    //cout<<a<<" "<<b<<" "<<a%b<<endl;
    return gcd(b,a%b);
}

int main(){
int a,b;
cin>>a>>b;
cout<<gcd(a,b);
}
