#include<bits/stdc++.h>
using namespace std;

bool isPositive(vector<int> a){
    int n=a.size();
    for(int i=0;i<n;i++){
        if((i+1)>a[i]){
            return false;
        }
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a;

        for(int i=1;i<=n;i++){
            int x;cin>>x;
            a.push_back(x);
        }

        if(isPositive(a)){
            cout<<"1\n";
        }else{
            sort(a.begin(),a.end());
            int count=1;
            for(int i=0;i<a.size();i++){
                if((i+1)>a[i]){
                    a.erase(a.begin(),a.begin()+i);
                    count++;
                    i=0;
                }
            }

            cout<<count<<endl;
        }

        
        



    }

return 0;
}