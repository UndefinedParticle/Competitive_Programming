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
        int diff=abs(a-b);
        int count=0;
        for(int i=1;i<=sqrt(diff);i++){
            if(diff%i==0){
                if(diff/i==i)
                    count++;

                else
                    count=count+2;
            }
        }
        cout<<count<<endl;
        
    }



    return 0;
}