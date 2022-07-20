#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int x,y,z;cin>>x>>y>>z;
        int restTime;
        if(x%3==0)
            restTime=((x/3)*z)-z;
        else
            restTime=(x/3)*z;
        cout<<(x*y)+restTime<<endl;



    }

return 0;
}