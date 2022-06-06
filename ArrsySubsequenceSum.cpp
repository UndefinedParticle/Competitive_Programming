#include<bits/stdc++.h>
using namespace std;
//Time Complexity O(n*2^n)
//Space Complexity O(n)
bool printF(int index,vector<int> &subset,int a[],int s,int sum,int n){
    if(index==n){
        if(s==sum){
            for(auto it:subset)
                cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    } 
    subset.push_back(a[index]);
    s=s+a[index];
    if(printF(index+1,subset,a,s,sum,n)==true) return true;
    s=s-a[index];
    subset.pop_back();
    
    if(printF(index+1,subset,a,s,sum,n)==true) return true;
    return false;
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
    cout<<"Sum: ";
    int sum;cin>>sum;
    cout<<"Subsequences: \n";
    printF(0,subset,a,0,sum,n);
    
    return 0;
}