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
    int n;
    cin >> n;
    int arr[n];
    int count[n];

    for(int i=0; i<n; i++) 
        cin >> arr[i];

    for(int i=0; i<n; i++) {
        int tempCount = 0;
        for(int j=0; j<n; j++) {
            if((arr[i] == arr[j]) && (i != j)) {
                tempCount++;
            }
        }
        count[i] = tempCount;
    }

    sort(count, count+n, greater<int>());

    cout << n - count[0] - 1;


}