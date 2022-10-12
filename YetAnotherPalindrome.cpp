#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(ll i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}

bool isPalindrome(vector<ll> &a){
    ll start=0,end=a.size()-1;
    while(start<=end){
        if(a[start++] != a[end--])
            return false;
    }
    return true;
}


int main(){
    code_init();

    //Number of test cases
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> a;
        
        loop(i,0,n){
            ll x;cin>>x;
            
            a.emplace_back(x);
        }

        ll i,j;
        if(n%2){
            i=n/2;
            j=n/2;
        }else{
            i=n/2 -1;
            j=n/2;
        }

        bool flag=false;

        while(i>=0 &&j<n){
            if(a[i]==a[j]){
                i--;
                j++;
            }else{
                flag=true;
                break;
            }
        }

        if(!flag){
            cout<<"0\n";
        }else{
            int temp=0,temp1,temp2;
            temp1=i,temp2=j;
            while(i>=0 && j<n){
                if(a[i]>a[j]){
                    temp=1;
                    break;
                }else{
                    i--;
                    j++;
                }
            }
            if(temp==1){
                cout<<"-1\n";
            }else{
                i=temp1;
                j=temp2;
                temp=0;
                while(i>0 && j<n-1){
                    if(a[j]-a[i]>a[j+1]-a[i-1]){
                        temp=1;
                        break;
                    }else{
                        i--,j++;
                    }
                }
                if(temp){
                    cout<<"-1\n";
                }else{
                    i=temp1;
                    j=temp2;
                    temp=0;
                    int temp3=a[j++]-a[i--];
                    while(i>=0 && j<n){
                    if( temp3!=0 && a[i]%temp3 > a[j]){
                        temp=1;
                        break;
                    }else{
                        temp3=a[j++]-a[i--];
                    }
                }
                if(temp==1){
                    cout<<"-1\n";
                }else{
                    cout<<temp3<<endl;
                }
                }



                
                
            }
        }




    }

return 0;
}