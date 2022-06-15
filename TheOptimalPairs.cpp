#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}
int g(int a,int b){
    return gcd(a,b)+lcm(a,b);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int mini=INT_MAX;
        int x=n/2;
        int count=0;
        for(int i=1;i<n;i++){
            
            mini=min(mini,g(i,n-i));
            
        }
        int newmin=INT_MAX;

        for(int i=1;i<n;i++){
            newmin=min(newmin,g(i,n-i));
            if(mini==newmin)
                count++;
        }
        cout<<count<<endl;
    }




    return 0;
}