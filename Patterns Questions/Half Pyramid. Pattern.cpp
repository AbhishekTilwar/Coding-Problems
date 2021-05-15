#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            if(j<=(n-i))
            {
                cout<<" ";
            }
            else{
            cout<<"*";
            }
        }
        cout<<endl;
    }
}


/* Pattern- Half Pyramind of 180 degree Rotation

    *
   **
  ***
 ****
*****

*/
