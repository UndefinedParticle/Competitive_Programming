#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);

    
            int l=1;
            int r=n;
            for(int i=n-1;i>=0;i--){
                if((i+1)%2==0){
                    a[i]=l;l++;
                }else{
                    a[i]=r;r--;
                }
            }
        



        for(auto it:a){
            cout<<it<<" ";
        }cout<<endl;

}


        



return 0;
}