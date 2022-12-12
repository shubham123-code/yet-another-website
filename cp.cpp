#include <bits/stdc++.h>
using namespace std;


void solve(){
    int x,y;
    cin>>x>>y;
    if(y<x)swap(x,y);
    int t=y-x;
    if(__gcd(x,y)!=1){
        cout<<"0\n";
        return;
    }
    if(t==1){
        cout<<"-1\n";
        return;
    }
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}