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


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        int n;cin>>n;
        string s;cin>>s;
        int countZero=0,countOne=0;

        loop(i,0,n){
            if(s[i]=='0'){
                countZero++;
            }else{
                countOne++;
            }
        }
        if(countOne==n){
            cout<<1<<endl;
        }else{
            
            stack<char> st;
            int flag=1;

            loop(i,0,n){
                if(!st.empty()){

                    if(st.top()=='1' && s[i]=='1'){
                        flag=0;
                        break;
                    }else if(st.top()=='0' && s[i]=='0'){
                        st.pop();
                    }else{
                        st.push(s[i]);
                    }

                }else{
                    st.push(s[i]);
                }
            }

            (flag==0)? cout<<"1\n":cout<<"2\n";

        }


    }

return 0;
}