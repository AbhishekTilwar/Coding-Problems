// Approach 1

#include <iostream>
using namespace std;

int main(){
    int b;
    cin>>b;
    int i;
    for(i=2; i<b;i++)
    {
        if(b%i==0)
        {
            cout<<"Non-Prime"<<endl;
            break;
        }
    }
        if(i==b)
        {
            cout<<"Prime"<<endl;
        }
    return 0;
}

// Approach 2

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n=12334;
    int flag=0;
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-prime";
            flag=1;
            break;
            }
    }
    if(flag==0) cout<<"prime";
}

