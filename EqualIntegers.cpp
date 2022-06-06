#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){

        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<y-x<<endl;
        }else if(y<x){
            if((x%2!=0 && y%2==0) || (x%2==0 && y%2!=0)){
                int ans=(x+1-y)/2;
                cout<<ans+1<<endl;
            }else{
                cout<<(x-y)/2<<endl;
            }
        }else{
            cout<<"0\n";
        }
    }



    return 0;
}