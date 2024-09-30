#include<bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    int max_length = 0;
    int curr_ctr = 1;
    char curr_chr = str[0];
    size_t index = 1;
    while (index < str.size()){
        if (curr_chr == str[index]) curr_ctr++;
        else{
            max_length = max(max_length, curr_ctr);
            curr_ctr = 1;
            curr_chr = str[index];
        }
        index++;
    }
    cout<<max(max_length, curr_ctr);
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