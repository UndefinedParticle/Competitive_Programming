#include<bits/stdc++.h>
using namespace std;
//print N to 1.
void f(int n,int i){
    if(i>n) return;
    cout<<n<<endl;
    f(n-1,i);
}


int main(){
    cout<<"Enter an integer value : ";
    int n;cin>>n;
    f(n,1);
    return 0;
}