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
    int x1, x2, y1, y2, z1, z2;

    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

    if((x2 < x1) || (y2 <y1) || (z2>z1) ) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}