#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int minAB,minBC,minCA;
        cin>>minAB>>minBC>>minCA;
        int min1=min(minAB,minBC);
        int min2=min(min1,minCA);
        
        if(min2==minAB && min2==minBC){
            cout<<"Yes\n";
        }else if(min2==minAB && min2==minCA){
            cout<<"Yes\n";
        }else if(min2==minBC && min2==minCA){
            cout<<"Yes\n";   
        }else{
            cout<<"No\n";
        }



    }

return 0;
}