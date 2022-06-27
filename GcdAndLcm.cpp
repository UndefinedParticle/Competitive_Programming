#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int count=0;
        if(n==4){
            count=1;
            //cout<<"1"<<endl;
        }else if(n%2!=0){
            count=0;
            //cout<<count<<endl;
        }else{

            for(int i=1;i<=(sqrt(n/2));i++){
                int j=(n/2)-(i*i);
                int s=sqrt(j);
                if((s*s)==j){
                    count=2;
                    break;
                }
                

            }
        }
        cout<<count<<endl;
    }




    return 0;
}