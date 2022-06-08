#include<bits/stdc++.h>
using namespace std;



int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a;
        int p=0,q=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==1)
                p++;
            if(x==-1)
                q++;
            a.emplace_back(x);
        }
        if(p==q){
            cout<<"0"<<endl;
        }else if((p+q)%2==0){
            if(p>q){
                cout<<(n/2)-q<<endl;
            }
            if(q>p){
                cout<<(n/2)-p<<endl;
            }
        }else{
            cout<<"-1"<<endl;
        }

    }





    return 0;
}