#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int, int> mp;
    long long int temp;
    for (int i=0; i<n; i++){
        cin>>temp;
        if (mp.count(temp) == 0) mp[temp] = 1; 
    }
    cout<<mp.size();
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