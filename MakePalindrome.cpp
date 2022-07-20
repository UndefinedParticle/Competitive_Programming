#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int n){
    int start=0,end=n-1;
    while(start<=end){
        if(s[start++] != s[end--])
            return false;
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int countZero=0;
        int countOne=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                countZero++;
            }else{
                countOne++;
            }
        }

        string ans="";
        if(isPalindrome(s,n)){
            cout<<s<<endl;
        }else if(countOne>=countZero){
            for(int i=0;i<countOne;i++)
                ans+='1';
            cout<<ans<<endl;
        }else{
            for(int i=0;i<countZero;i++)
                ans+='0';
            cout<<ans<<endl;

        }

        





    }

return 0;
}