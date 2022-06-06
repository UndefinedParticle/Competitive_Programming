#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int lcm(int a,int b){
    return (a / gcd(a, b)) * b;

}


int f(int a,int b){
    return (lcm(a,b) - gcd(a,b));
}

int main(){

    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        int max=0;
        for(int i=1;i<=n/2;i++){
            //if(i>0 && n-i>0){
                int ans=f(i,n-i);
                if(ans>max)
                    max=ans;
            //}
            
            
        }
        cout<<max<<endl;


    }



    return 0;
}