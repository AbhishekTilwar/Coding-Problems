#include <iostream>

using namespace std;

int main(){
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
