#include<bits/stdc++.h>
using namespace std;

vector<int> hashing(vector<int>& a,int x){
    int n=a.size();
    vector<int> ans;
    vector<int> mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(find(mp.begin(),mp.end(),x-a[i]) != mp.end()){
            ans.emplace_back(a[i]);
            ans.emplace_back(x-a[i]);
            //break;
            //return ans;
        }else 
            mp.push_back(a[i]);
    }
    //sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //cout<<"Array Size: ";
    int n;cin>>n;
    //cout<<"Array Elements:\n";
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.emplace_back(x);
    }
    //cout<<"Target element: ";
    int x;cin>>x;
    
    vector<int> ans=hashing(a,x);
    for(auto it:ans){
        cout<<it<<" ";
    }cout<<endl;
    


return 0;
}