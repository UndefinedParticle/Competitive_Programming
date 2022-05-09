#include<bits/stdc++.h>
using namespace std;
//print 1 to N.
void f(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    f(i+1,n);
}


int main(){
    cout<<"Enter an integer value : ";
    int n;cin>>n;
    f(1,n);
    return 0;
}