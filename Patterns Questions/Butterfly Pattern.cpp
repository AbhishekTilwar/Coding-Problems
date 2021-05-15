#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int i;
        //pattern part 1
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            {
                cout<<"*";
            }
        }
        for(int j=1;j<=(2*n-2*i);j++){
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=i;j++){
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
        //pattern part 2
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--){
            {
                cout<<"*";
            }
        }
        for(int j=(2*n-2*i);j>=1;j--){
            {
                cout<<" ";
            }
        }
        for(int j=i;j>=1;j--){
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

/* Pattern

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
