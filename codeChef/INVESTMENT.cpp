#include <bits/stdc++.h>
using namespace std;
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
    int x, y;
    cin >> x >> y;
    if((2*y) <= x) {
        cout << "YES";
    } else {
        cout<< "NO";
    }
}