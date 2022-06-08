#include<bits/stdc++.h>
using namespace std;



int main(){
	#ifndef ONLINE_JUDGE
 
    	freopen("input.txt", "r", stdin);
 
    	freopen("output.txt", "w", stdout);
   
	#endif


	 int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int count=0;
        while(true){
            if(a%3==0 || b%3==0){
                cout<<count<<endl;
                break;
            }
            int dif=abs(a-b);
            if(a<=b){
                b=dif;
            }else{
                a=dif;
            }



            count++;
        }

    }




	return 0;



}