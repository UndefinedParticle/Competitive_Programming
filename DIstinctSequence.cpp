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


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        int n;cin>>n;
        string s;cin>>s;

        ll countZero=0,countOne=0;

        loop(i,0,s.size()){
            if(s[i]=='0'){
                countZero++;
            }else{
                countOne++;
            }
        }

        if(countOne==2*n || countZero==2*n){
            cout<<-1<<endl;
        }else{
            set<int> a;
            int cnt=1;
            int k=n;
            if(countOne==countZero){
                loop(i,0,s.size()){
                    if(cnt<=k){
                        if(s[i]=='1'){
                            a.insert(i+1);
                            cnt++;
                        }
                        
                    }else{
                        break;
                    }
                    
                }
            }else if(countOne > countZero){
                loop(i,0,s.size()){
                    if(cnt<=k){
                        if(s[i]=='0'){
                            a.insert(i+1);
                            cnt++;
                        }
                        
                    }else{
                        break;
                    }
                        
                }
                if(a.size()<n){
                    int size=a.size();
                    loop(i,0,s.size()){
                        
                        if(size<n){
                            if(s[i]=='1'){
                                a.insert(i+1);
                                size++;
                            }
                            
                        }else{
                            break;
                        }
                    }
                }
            }else{
                int cnt=1;
                loop(i,0,s.size()){
                    if(cnt<=n){
                        if(s[i]=='1'){
                            //cout<<"count: "<<cnt<<" "<<i+1<<endl;
                            a.insert(i+1);
                            cnt++;
                        }
                        //cnt++;
                    }else{
                        break;
                    }
                        
                }
                if(a.size()<n){
                    int size=a.size();
                    loop(i,0,s.size()){
                        
                        if(size<n){
                            if(s[i]=='0'){
                                a.insert(i+1);
                                size++;
                            }
                            
                        }else{
                            break;
                        }
                    }
                }
            }



            for(auto it:a){
                cout<<it<<" ";
            }cout<<endl;
        }



    }

return 0;
}