#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int start,int end){
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
}

void rvereseArray(int arr[], int start, int end){
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size){
   for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
   cout << endl;
}
int main(){
    cout<<"Enter the size of the array : ";
    int n;cin>>n;
    int a[n];
    cout<<"Give the elements of the array :\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Array is :\n";
    printArray(a,n);
    //Time complexity O(n)
    int start=0,end=n-1;
    for(int i=1;i<=n/2;i++){
        swap(a,start,end);
        start++;
        end--;
    }
    cout<<"New Array is :\n";
    printArray(a,n);
    return 0;
}