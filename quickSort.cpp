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

void quickSort(int a[],int l,int r){
    if(l<r){
        int piv=myPartition(a,l,r);
        quickSort(a,l,piv-1);
        quickSort(a,piv+1,r);
    }
}

void printArray(int arr[], int size){
   for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
   cout << endl;
}

int main(){
    cout<<"Array size: ";
    int n;cin>>n;
    cout<<"Array elements: \n";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    printArray(a,n);

}