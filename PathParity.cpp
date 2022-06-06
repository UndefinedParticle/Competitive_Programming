#include<bits/stdc++.h>
using namespace std;

bool pathParity(vector<vector<int>>& a,int i,int j,int n,int k,int s){
    if(n==1)
        s=1;
    if(i==n-1 && j==n-1){
        if(s%2==0 && k==0){
            cout<<"Yes\n";
            return true;
        }else if(s%2!=0 && k==1) {
            cout<<"Yes\n";
            return true;
        }else{
            return false;
        }
        
    }else if(i>=n || j>=n){
        return false;
    }



    if(i<n &&j<n)
        s=s+a[i][j];
    if(pathParity(a,i,j+1,n,k,s)==true) return true;
    s=s-a[i][j];
    if(pathParity(a,i+1,j,n,k,s)==true) return true;
   
        

    

    return false;

}


int main(){
    cout<<"Test Cases: ";
    int t;cin>>t;
    while(t--){
        cout<<"Value of n & k ; ";
        int n,k;
        cin>>n>>k;
        vector<vector<int>> a;
        //matrix input
        for(int i=0;i<n;i++){
            vector<int> vt;
            for(int j=0;j<n;j++){
                vt.push_back(i+1+ n*(j));
            }
            a.push_back(vt);
        }


        //matrix print
        /*for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }cout<<endl;
        }*/

        if(pathParity(a,0,0,n,k,0)==false)
            cout<<"No\n";

    }



    return 0;
}