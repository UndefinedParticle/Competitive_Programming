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

bool isPalindrome(string s){
    int start=0,end=s.size()-1;
    while(start<=end){
        if(s[start++] != s[end--])
            return false;
    }
    return true;
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

        if(countOne%2==0 || countZero%2==0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }



    }

return 0;
}