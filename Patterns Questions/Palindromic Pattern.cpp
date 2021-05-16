#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int count=i;

        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<count;
            count--;
        }
        for(int m=1; m<i+1; m++){
            cout<<count;
            count++;
        }
        cout<<endl;
        }
}

/*  Pattern

    1
   212
  32123
 4321234
543212345

*/
