#include<bits/stdc++.h>
using namespace std;
class Pair{
    public:
    int min;
    int max;
};
//Simple linear Search
//Time complexity O(n)
//Space complexity O(1)
Pair getMinMax1(int a[],int n){
    Pair minmax;
    int i;
    if(n==1){
        minmax.min=a[0];
        minmax.max=a[0];   
    }
    if(a[0]>a[1]){
        minmax.min=a[1];
        minmax.max=a[0];
    }else{
        minmax.min=a[0];
        minmax.max=a[1];
    }
    for(int i=2;i<n;i++){
        if(a[i]<minmax.min)
            minmax.min=a[i];
        else if(a[i]>minmax.max)
            minmax.max=a[i];
    }
    return minmax;
}

//Tournament Method
//Time complexity O(n)
//Space complexity O(log n)
Pair getMinMax2(int a[],int start,int end){
    Pair minmax,left,right;
    
    if(start==end){
        minmax.min=a[start];
        minmax.max=a[start];
        return minmax;
    }
    if(end==start+1){
        if(a[start]>a[end]){
            minmax.min=a[end];
            minmax.max=a[start];
        }else{
            minmax.min=a[start];
            minmax.min=a[end];
        }
    }
    int mid=(start+end)/2;
    left=getMinMax2(a,start,mid);
    right=getMinMax2(a,mid+1,end);
    if(left.min<right.min){
        minmax.min=left.min;
    }else
        minmax.min=right.min;
    if(left.max>right.max){
        minmax.max=left.max;
    }else
        minmax.max=right.max;
    return minmax;

}

//Compare in Pairs
//Time complexity O(n)
//Space complexity O(1)
Pair getMinMax3(int a[],int n){
    Pair minmax;
    int i;
    if(n%2==0){
        if(a[0]>a[1]){
            minmax.min=a[1];
            minmax.max=a[0];
        }else{
            minmax.min=a[0];
            minmax.max=a[1];
        }
        i=2;
    }else{
        minmax.min=a[0];
        minmax.max=a[0];
        i=1;
    }
    while(i<n-1){
        if(a[i]>a[i+1]){
            if(minmax.min>a[i+1])
                minmax.min=a[i+1];
            if(minmax.max<a[i])
                minmax.max=a[i];
        }else{
            if(minmax.min>a[i])
                minmax.min=a[i];
            if(minmax.max<a[i+1])
                minmax.max=a[i+1];
        }
        i=i+2;
    }
    return minmax;
}


int main(){
    cout<<"Enter the size of the array : ";
    int n;cin>>n;
    int a[n];
    cout<<"Give the elements of the array :\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Pair minmax1=getMinMax1(a,n);
    cout << "Minimum element is: "<< minmax1.min << endl;
    cout << "Maximum element is: "<< minmax1.max<<endl;
    cout<<endl;
    Pair minmax2=getMinMax2(a,0,n-1);
    cout << "Minimum element is: "<< minmax2.min << endl;
    cout << "Maximum element is: "<< minmax2.max<<endl;
    cout<<endl;
    Pair minmax3=getMinMax3(a,n);
    cout << "Minimum element is: "<< minmax3.min << endl;
    cout << "Maximum element is: "<< minmax3.max<<endl;

    return 0;
}