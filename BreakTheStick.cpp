#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;cin>>t;
    while(t--){

        int n,x;
        cin>>n>>x;
        // int parity=x%2;
        int m=n-x;
        if(x==1)
            cout<<"Yes\n";
        else if(n%2==0){
            if(x%2==0)
                cout<<"Yes\n";
            else{
                if(m%2!=0)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
             
        }else{
            if(x%2==0)
                cout<<"No\n";
            else
                cout<<"Yes\n";
        }


    }



    return 0;
}