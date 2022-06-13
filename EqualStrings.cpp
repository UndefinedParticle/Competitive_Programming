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
        string a,b;
        cin>>a;
        cin>>b;
        int count=0;
        string c="";
        //int k=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                c=c+b[i];
                //count++;
            }
        }
        sort(c.begin(),c.end());
        for(int i=0;i<c.size()-1;i++){
            if(c[i]!=c[i+1])
                count++;
        }
        cout<<count+1<<endl;
        
    }
    return 0;
}