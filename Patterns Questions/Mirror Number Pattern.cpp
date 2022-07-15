#include<bits/stdc++.h>

using namespace std;

void pat_print(int n){
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    for(int i=n; i>=1; i--){
        int count2=count-i;
        for(int j=1; j<=i; j++){
            cout<<count2<<" ";
            count2++;
        }
        count-=i;
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pat_print(n);
    return 0;
}

/*
5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
11 12 13 14 15 
7 8 9 10 
4 5 6 
2 3 
1 
*/
