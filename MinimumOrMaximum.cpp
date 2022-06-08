#include<bits/stdc++.h>
using namespace std;



int main(){

	int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> b;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            b.emplace_back(x);
        }

        int myMin=INT_MAX;
        int myMax=INT_MIN;
        bool ans=false;
        for(int i=0;i<n;i++){
            myMin=min(myMin,b[i]);
            myMax=max(myMax,b[i]);
            if(b[i]==myMin || b[i]==myMax){
                ans=true;
            }else{
                ans=false;
                break;
            }
        }
        if(ans==true)
            cout<<"Yes\n";
        else
            cout<<"No\n";



    }




	return 0;



}