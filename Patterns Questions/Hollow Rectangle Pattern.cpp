#include <iostream>

using namespace std;

int main(){
    
    int row,col;
    cin>>row>>col;
     for(int j=0;j<col;j++){
            cout<<"*";
        }
        cout<<endl;

    for(int i=0;i<(row+1)/2;i++)
    {
        cout<<"*";
        for(int j=0;j<(col+1)/2;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    
    for(int j=0;j<col;j++){
            cout<<"*";
        }       
        cout<<endl;


}

/* Pattern

****
*  *
*  *
*  *
****

*/
