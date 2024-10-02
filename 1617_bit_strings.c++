#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long int res = 1;
    for (int i = 1; i<=n; i++){
        res = (res*2)%1000000007;
    }
    cout<<res;    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--){
        solve();
    }
    return 0;
}