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
