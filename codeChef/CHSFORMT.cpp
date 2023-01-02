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
    int a , b;
    cin >> a >> b;

    int sum = a + b;

    if(sum < 3) {
        cout << 1 ;
    } else if(sum <= 10) {
        cout << 2;
    } else if(sum <=60) {
        cout << 3;
    } else {
        cout << 4;
    }
}