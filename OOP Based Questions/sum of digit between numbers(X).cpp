//CODE NOT WORKING
#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
}

int main(){
    int n,m,x;
    cin>>n;
    cin>>m;
    cin>>x;
    vector<int> v;

    for(int i=n; i<m; i++){
        int z=0;
        while(n--){
         int last=i%10;
         z=z+last;
         i=i/10;
        }
            if(z==x){
                v.push_back(z);
            }
    }
    printvec(v);
}
