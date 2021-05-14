#include <iostream>

using namespace std;

int main(){
    //find all the prime no. b/w 10 to 100
    int b;
    cin>>b;
    int i;
    for(i=2; i<b;i++){
        if(b%i==0){
            cout<<"Non-Prime"<<endl;
            break;
        }
    }
        if(i==b){
            cout<<"Prime"<<endl;
        }
    return 0;
}
