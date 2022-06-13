#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    int t;cin>>t;
    while(t--){  
        int a,b;cin>>a>>b;
        int i=1;
        /*while(a<=b){
            if(a==b)
                break;
            else if(i%2!=0){
                a=a+1;
            }else{
                a=a+2;
            }i++;

        }
        if(a==b)
            cout<<"Yes\n";
        else
            cout<<"No\n";*/


        if((b-a)%3==0)
            cout<<"Yes\n";
        else if((b-a)%3==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";



    }
    return 0;
}