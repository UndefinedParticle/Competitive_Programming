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

        string s1=s;
        reverse(s1.begin(),s1.end());

        vector<vector<int>> l(n+1,vector<int>(n+1,0));

        loop(i,1,n+1){
            loop(j,1,n+1){
                if(s[i-1]==s1[j-1]){
                    l[i][j]=l[i-1][j-1]+1;
                }else{
                    l[i][j]=max(l[i-1][j],l[i][j-1]);
                }
            }
        }





        cout<<l[n][n]/2<<endl;
    }

return 0;
}