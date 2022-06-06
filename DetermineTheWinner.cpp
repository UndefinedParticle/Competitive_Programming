#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){

        int Pa,Pb,Qa,Qb;
        cin>>Pa>>Pb>>Qa>>Qb;
        int Pmax=max(Pa,Pb);
        int Qmax=max(Qa,Qb);
        if(Pmax<Qmax)
            cout<<"P\n";
        else if(Pmax>Qmax)
            cout<<"Q\n";
        else
            cout<<"TIE\n";
    }



    return 0;
}