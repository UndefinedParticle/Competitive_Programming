#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int myPartition(int a[],int l,int r){
    int piv=a[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++){
        if(a[j]<piv){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
int kthSmallest(int arr[], int l, int r, int k)
{if (k > 0 && k <= r - l + 1) {
    int index = myPartition(arr, l, r);
    if (index - l == k - 1)
            return arr[index];
    if (index - l > k - 1)
            return kthSmallest(arr, l, index - 1, k);
            return kthSmallest(arr, index + 1, r,
                            k - index + l - 1);
    }
 return INT_MAX;
}
int main(){
    cout<<"Array size: ";
    int n;cin>>n;
    cout<<"Array elements: \n";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"K value: ";
    int k;cin>>k;
    int p=sizeof(a)/sizeof(a[0]);
    //sort(a,a+p);
    /*for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }*/
    cout<<"Kth smallest value is: \n";
    cout<<kthSmallest(a, 0, n - 1, k)<<endl;

    return 0;
}