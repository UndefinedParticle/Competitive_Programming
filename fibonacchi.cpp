#include<bits/stdc++.h>
using namespace std;
//Memoization
int fib(int n,vector<int> &v){
    if(n<=1)
         return n;
    if(v[n]!=-1) return v[n];
    return v[n]=fib(n-1,v)+fib(n-2,v);
}
//Tabulation
int fib1(int n){
    int prev2=0;
    int prev1=1;
    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int main(){
    cout<<"Enter an integer value => \n";
    int n;cin>>n;
    vector<int> v(n+1,-1);
    cout<<"Ans is => "<<fib(n,v)<<endl;
    cout<<"Ans is => "<<fib1(n)<<endl;
    return 0;
}