#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int p;cin>>p;
        if(p>=100){
            int x=p/100;
            if((p%100)<=(10-x)){
                cout<<x+(p%100)<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }else{
            if(p<=10)
                cout<<p<<endl;
            else
                cout<<"-1"<<endl;
        }


    }




    return 0;
}