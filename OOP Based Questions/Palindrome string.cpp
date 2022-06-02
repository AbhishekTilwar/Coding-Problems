#include<bits/stdc++.h>

using namespace std;

void palindrome(string s1){
    //string s2 = s1;
    //reverse s2
    //reverse(s2.begin(), s2.end());
    int len=s1.length();
    bool flag= false;
    for(int i=0; i<len; i++){
        if(s1[len]!=s1[len-i-1]){
            flag = false;
            break;
        }  
        else{
            flag=true;
        }
    }



    if(flag==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not an Palindrome";
    }

}

int main(){
    string s1;
    cin>>s1;
    palindrome(s1);

    return 0;
}
