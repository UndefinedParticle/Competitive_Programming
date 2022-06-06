#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;
        int p,q,r,s;
        int x=0;
        int y=0;
        for(int i=a;i<=b-4;i++){
            p=i,q=i+1,r=i+2,s=i+3;
            if((p^q^r^s)!=0 && s<=b){
                x++;
                cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
                break;
            }
        }
        if(x==0){
            cout<<"-1\n";
        }


    }



    return 0;
}