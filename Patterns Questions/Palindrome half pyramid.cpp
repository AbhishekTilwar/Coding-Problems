#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=1;j<i;j++){
            cout<<count;
            count++;
        }
        for(int m=1;m<i+1;m++){
            cout<<count;
            count--;
        }
        cout<<endl;
        }
}

/*  Pattern

1
121
12321
1234321
123454321
12345654321

*/
