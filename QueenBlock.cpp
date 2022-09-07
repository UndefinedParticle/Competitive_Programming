#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)
int board[8][8]={0};
int dx[]={-1,0,1};
int dy[]={-1,0,1};

bool isSafe(int a,int b,int x,int y){
    if(x==a || y==b || x+y==a+b || (y-x)==b-a)
        return false;
    return true;
}

void check(int a,int b){

    loop(i,0,64){
        int x1=i/8,y1=i%8;
        if(!isSafe(a,b,x1,y1))
            continue;
        loop(j,0,64){
            int x2=j/8,y2=j%8;
            if(!isSafe(a,b,x2,y2))
                continue;
            bool flag=1;
            for(auto it1:dx){
                for(auto it2:dy){
                    if(it1==0 && it2==0) continue;
                    int nx=a+dx,ny=b+dy;
                    if(nx<0 || ny<0 || nx==8 || ny==8) continue;

                }
            }
            
        }
    }


}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;

      


        


    }

return 0;
}