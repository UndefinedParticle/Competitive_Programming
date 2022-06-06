#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.push_back(x);
        }

        
        int sum=a[0]+a[n-1];
        int max=sum;
        int j1=n-1,jn=n-2;
        for(int i=1;i<n;i++){
            sum=a[j1]+a[jn];
            j1--;jn--;
            if(sum>max){
                max=sum;
            }


        }



    }



    return 0;
}