//Problem Statment: https://hack.codingblocks.com/app/practice/6/1038/problem

#include<iostream>
using namespace std;
int main() {
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int ans=0;
		while(n>0){
			ans+=n&1;
			n=n>>1;
		}
		cout<<ans<<endl;
}
	return 0;
}
