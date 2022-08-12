// Efficient Approach using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void sieve(int a, int b){
    vector<bool> arr(b,true);
    
    for(int i=2; i*i<=b; i++) //i*i=n is equal to i=sqrt(n)
    {
        for(int j=2*i; j<b; j+=i){
            if(arr[i]==true){
                arr[j]=false;
            }
        }
    }
    
    for(int i=2; i<=b; i++){
        if(arr[i]==true)
        cout<<i<<endl;
    }
}

int main() {
    // Write C++ code here
    int a, b;
    cin>>a>>b;
    sieve(a,b);
    

    return 0;
}


// Normal Approach


#include <iostream>

using namespace std;

int main(){
    //find all the prime no. b/w 10 to 100
    int a,b;
    cin>>a;
    cin>>b;

    for(int i=a;i<b;i++){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }

    }
    return 0;

    }
