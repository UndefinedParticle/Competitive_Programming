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
        int a[n];
        a[n]=n;
        int k;
        if(n%2==0){
            int first=n/2;
            a[1]=first;
            k=first+1;
            for(int i=2;i<n;i=i+2){
                a[i]=k;
                k++;
            }
            
            k=first-1;
            for(int i=3;i<n-1;i++){
                
                    a[i]=k;
                    k--;

            }

        }else{
            int first=(n+1)/2;
            a[1]=first;
            k=first+1;
            for(int i=3;i<n;i=i+2){
                    a[i]=k;
                    k++;

            }
            k=first-1;
            for(int i=2;i<n-1;i++){
                
                    a[i]=k;
                    k--;

            }

        }
        





        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }



    return 0;
}