#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}
bool isPrime(ll n){
    
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}





int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        int a=1,b=0,c=0;

        int flag=0;

        for(int i=2;i<sqrt(n);i++){
            if(n%i ==0){
                b=i;
                c=n/i;
                flag=1;
                break;
            }
        }
        
        if(!flag || b==c){
            cout<<-1<<endl;
        }else{
            cout<<a<<" "<<b<<" "<<c<<endl;
        }


    }

return 0;
}