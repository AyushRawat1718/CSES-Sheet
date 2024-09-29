#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while (n != 1){
        if (n&1) n = n*3 + 1;
        else n = n/2;
        cout<<n<<" ";
    }
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