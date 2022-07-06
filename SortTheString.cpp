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
        string s;cin>>s;
        int c=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='0')
                c++;
        }
        //(s[n-1]=='1')? cout<<c-1<<endl:cout<<c<<endl;
        cout<<c<<endl;

    }

return 0;
}