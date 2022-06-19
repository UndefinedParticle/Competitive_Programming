#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        long long a,b,n;cin>>a>>b>>n;
        long long xor1=a^b;
        int count=0;
        if(a==b)
            cout<<"0\n";
        else if(xor1<n)
            cout<<"1\n";
        //else if(xor1>=n)
            //cout<<"-1\n";
        else{
             if(log(xor1)==log(n)){
                if(n & (n-1))
                    cout<<"2\n";
                else
                    cout<<"-1\n";
             }else{
                cout<<"-1\n";
             }

        }

    }




    return 0;
}