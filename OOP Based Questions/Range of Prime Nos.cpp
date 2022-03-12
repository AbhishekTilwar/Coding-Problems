// Efficient Approach using Sieve of Eratosthenes
#include <bits/stdc++.h>

using namespace std;

int main(){

int n,m;
cin>>m>>n;

    //creating a vector of true values
vector<bool> arr;
for (int i = 0; i < n; i++)
{
    arr.push_back(true);
}

    //
for (int i = 2; i*i <= n; i++) //i*i=n is equal to i=sqrt(n)
{
    for (int j = 2*i; j <= n; j+=i)
    {
           arr[j]=false;
      
    }
      
}

for (int i = m; i <= n; i++)
{
    if(arr[i]==true){
        cout<<i;
        cout<<endl;
    }

}

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
