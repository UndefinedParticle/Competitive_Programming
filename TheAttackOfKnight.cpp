#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int x1,y1;cin>>x1>>y1;
        int x2,y2;cin>>x2>>y2;
        int miniX=min(x1,x2);
        int miniY=min(y1,y2);
        vector<pair<int,int>> vt1;
        vector<pair<int,int>> vt2;
        if(x1-1>=1 && y1+2<=8)
            vt1.emplace_back(make_pair(x1-1,y1+2));
        if(x1+1<=8 && y1+2<=8)
            vt1.emplace_back(make_pair(x1+1,y1+2));
        if(x1+2<=8 && y1+1<=8)
            vt1.emplace_back(make_pair(x1+2,y1+1));
        if(x1+2<=8 && y1-1>=1)
            vt1.emplace_back(make_pair(x1+2,y1-1));
        if(x1-1>=1 && y1-2>=1)
            vt1.emplace_back(make_pair(x1-1,y1-2));
        if(x1+1<=8 && y1-2>=1)
            vt1.emplace_back(make_pair(x1+1,y1-2));
        if(x1-2>=1 && y1+1<=8)
            vt1.emplace_back(make_pair(x1-2,y1+1));
        if(x1-2>=1 && y1-1>=1)
            vt1.emplace_back(make_pair(x1-2,y1-1));




        if(x2-1>=1 && y2+2<=8)
            vt2.emplace_back(make_pair(x2-1,y2+2));
        if(x2+1<=8 && y2+2<=8)
            vt2.emplace_back(make_pair(x2+1,y2+2));
        if(x2+2<=8 && y2+1<=8)
            vt2.emplace_back(make_pair(x2+2,y2+1));
        if(x2+2<=8 && y2-1>=1)
            vt2.emplace_back(make_pair(x2+2,y2-1));
        if(x2-1>=1 && y2-2>=1)
            vt2.emplace_back(make_pair(x2-1,y2-2));
        if(x2+1<=8 && y2-2>=1)
            vt2.emplace_back(make_pair(x2+1,y2-2));
        if(x2-2>=1 && y2+1<=8)
            vt2.emplace_back(make_pair(x2-2,y2+1));
        if(x2-2>=1 && y2-1>=1)
            vt2.emplace_back(make_pair(x2-2,y2-1));


        string ans="No";
        for(int i=0;i<vt1.size();i++){
            for(int j=0;j<vt2.size();j++){
                if(vt1[i]==vt2[j]){
                    ans="Yes";
                    break;
                }
            }
        }
        cout<<ans<<endl;

    }




    return 0;
}