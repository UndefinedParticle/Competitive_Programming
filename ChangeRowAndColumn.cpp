#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        if(sx!=ex && sy!=ey)
            cout<<"1\n";
        else
            cout<<"2\n";
        


    }




    return 0;
}