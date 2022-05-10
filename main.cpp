#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
   //cout<<"Array size: ";
    int n;cin>>n;
    //cout<<"Array elements: \n";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //cout<<"K value: ";
    int k;cin>>k;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    //cout<<"Kth smallest value is: \n";
    cout<<a[k-1]<<endl;

    return 0;
}