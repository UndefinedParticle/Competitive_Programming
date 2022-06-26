#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}

int findGCD(vector<int>& arr, int n){
    int result = arr[0];
    for (int i = 1; i < n; i++){
        result = gcd(arr[i], result);
  
        if(result == 1)
           return 1;
    }
    return result;
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
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.emplace_back(x);
        }
        int myGcd=findGCD(a,n);
        int maxEle=*max_element(a.begin(),a.end());
        int count=0;
        for(int i=0;i<n;i++){
            int temp=a[i];
            int mark=0;
            for(int j=1;j<maxEle;j++){

                a[i]=j;
                int g=findGCD(a,n);
                if(g!=myGcd){
                    mark=1;
                    break;
                }
            }
            a[i]=temp;
            if(mark==1)
                count++;
        }
        cout<<count<<endl;
        


    }




    return 0;
}