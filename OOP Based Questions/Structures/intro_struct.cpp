#include<bits/stdc++.h>

using namespace std;

struct emp{
    int area;
    string address;
    long price;
};

int main(){

emp ep;
ep.area=10;
ep.address="somalwada";
ep.price=100000.0;

emp ep1;
ep1.area=20;
ep1.address="chatrapati";
ep1.price=20000000.00;

cout<<ep.area<<" "<<ep.address<<" "<<ep.price<<endl;
cout<<ep1.area<<" "<<ep1.address<<" "<<ep1.price<<endl;

return 0;
}
