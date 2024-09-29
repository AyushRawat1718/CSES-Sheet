#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    long long int sum = 0;
    long long int temp;
    for (int i=0;i<n-1;i++){
        cin>>temp;
        sum += temp;
    }
    long long int req_sum = (n * (n + 1))/2;
    cout<<req_sum - sum;
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