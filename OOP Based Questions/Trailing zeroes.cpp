#include <iostream>

using namespace std;

int find_zeros(int n){
    int ans=0;
    int p=5;
    while((n/p)>0)
    {
        ans+=(n/p);
        p=p*5;

    }
    return ans;
}
int main(){
    
    long long int a;
    cin>>a;
    cout<<find_zeros(a)<<endl;

}


/*Problem Statement
Input Format
A single integer N.

Constraints
1 <= N <= 10^9

Output Format
A single integer denoting the count of trailing zeroes in N!

Sample Input
5
Sample Output
1
Explanation
Factorial of 5 is 120 which has one trailing 0.*/


/*Important Concept!!
  if we need to find any number occuring in any factorial
  Num! be factorial and occurence number p need to find then
  
  Num/p + Num/p*p + Num/p*p*p......until the term (Num/p*p...) becomes zero.
  
  example: no of tailing zeros is (100/5 + 100/5^2 +100/5^3 now this stops as 100/5^3=0) */
