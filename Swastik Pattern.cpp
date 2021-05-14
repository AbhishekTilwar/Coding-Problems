#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


    cout<<"*";
    
    //pattern 1
    for(int i=0;i<(n-3)/2;i++){
        cout<<" ";
    }
    for(int i=0;i<(n+1)/2;i++){
        cout<<"*";
    }
    
    //pattern 2
    cout<<"\n";
    for(int j=0;j<(n-3)/2;j++){
        cout<<"*";
        for(int i=0;i<(n-3)/2;i++){
            cout<<" ";
        } 
    cout<<"*\n";
    }
    //pattern 3
    for(int i=0;i<n;i++){
            cout<<"*";
        } 
    //pattern 4
    cout<<"\n";
    for(int j=0;j<(n-3)/2;j++){
        for(int i=0;i<(n-1)/2;i++){
                cout<<" ";
        }
        cout<<"*";
        
        for(int i=0;i<(n-3)/2;i++){
                cout<<" ";
        } 
        cout<<"*\n";
    
    }
    
    //pattern 5
    for(int i=0;i<(n+1)/2;i++){
        cout<<"*";
    }
    for(int i=0;i<(n-3)/2;i++){
        cout<<" ";
    }
    cout<<"*";
}

// Output for n=7
//     *  ****
//     *  *
//     *  *
//     *******
//        *  *
//        *  *
//     ****  *
