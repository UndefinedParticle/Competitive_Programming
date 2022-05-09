#include<bits/stdc++.h>
using namespace std;
//Time Complexity O(n*2^n)
//Space Complexity O(n)
void printF(int index,vector<int> &subset,int a[],int n){
    if(index==n){
        for(auto it:subset){
            cout<<it<<" ";
        }
        if(subset.size()==0)
            cout<<"{}";
        cout<<endl;
        return ;
    }
    
    subset.push_back(a[index]);
    printF(index+1,subset,a,n);
    subset.pop_back();
    printF(index+1,subset,a,n);
}


int main(){
    cout<<"Array size: ";
    int n;cin>>n;
    cout<<"Array elements: \n";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> subset;
    cout<<"Subsequences: \n";
    printF(0,subset,a,n);
}