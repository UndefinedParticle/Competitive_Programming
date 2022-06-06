#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int lcm(int a,int b){
    return (a / gcd(a, b)) * b;

}


int f(int a,int b){
    return (lcm(a,b) - gcd(a,b));
}




int main(){
	#ifndef ONLINE_JUDGE
 
    	freopen("input.txt", "r", stdin);
 
    	freopen("output.txt", "w", stdout);
   
	#endif


	int t;cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;
        int p,q,r,s;
        int x=0;
        int y=0;
        for(int i=a;i<=b-4;i++){
            p=i,q=i+1,r=i+2,s=i+3;
            if((p^q^r^s)==0 && s<=b){
                x++;
                cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
                break;
            }else{
                y++;
                if(y>10)
                    break;
            }
        }
        if(x==0){
            cout<<"-1\n";
        }


    }

	return 0;



}