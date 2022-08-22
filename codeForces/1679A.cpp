#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll maxCount(ll n) {
    ll count = 0;
    if(n % 4 == 2) 
        count = (n / 4);  
    else 
        count = n / 4;
    
    return count;
 
}
 
ll minCount(ll n) {
    ll count = 0;
    if(n % 6 == 4) {
        count = (n / 6) + 1;
    } else if(n % 6 == 2) {
        count = (n / 6) + 1;
    } else {
        count = n / 6;
    }
    return count;
}
void solve();
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("temp/input.txt", "r", stdin);
    freopen("temp/time.txt", "w", stderr);
    freopen("temp/output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
 
    cerr << "time: " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve() {
    ll n;
    cin >> n;
    if(n % 2 != 0) {
        cout << -1;
        return;
    } else if(n < 4) {
        cout << -1;
        return;
    }
 
    cout << minCount(n);
    cout << " ";
    cout << maxCount(n);
    
    
    
}