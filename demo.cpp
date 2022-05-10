#include<bits/stdc++.h>
using namespace std;
//print N to 1.
void f(int n,int i){
    if(i>n) return;
    cout<<n<<endl;
    f(n-1,i);
}


int main(){
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
    int t;cin>>t;
    while(t--){  
        int n;cin>>n;
        int a[n];   
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p = sizeof(a) / sizeof(a[0]);
        sort(a,a+p);
        if(n==1)
            cout<<a[0];
        else{
            int max=0;
            int c=0;
            for(int i=n-1;i>=1;i--){
                if(a[i]==a[i-1]){
                    c++;
                }else{
                    if(max<a[i]+c){
                        max=a[i]+c;
                    }
                    c=0;
                }
            }
            cout<<max<<endl;
        }
    }
    return 0;
}