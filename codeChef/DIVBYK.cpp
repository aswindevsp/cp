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
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int p = 1;
    for(int i=1; i<(1 << n); i++) {
        p = 1;
        for(int j=0; j<n; j++) {
            if(i & (1 << j)) {
                cout << arr[j];
            } 
        }

        cout << endl;
    }

    // cout << "NO";
}