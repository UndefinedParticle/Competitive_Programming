#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a;
        long long sum=0;
        int one=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            sum += x;
            if(x==1)
                one=1;
            a.emplace_back(x);
        }

        if(one==1)
            cout<<"Chef\n";
        else if(sum%2==0)
            cout<<"Chefina\n";
        else
            cout<<"Chef\n";
        




    }

return 0;
}