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
    int p, c;
    cin >> p >> c;
    int arr[p];
    for(int i=0; i<p; i++) 
        cin >> arr[i];

    sort(arr, arr+p, greater<int>());

    int count = arr[0];
    count += count;
    count++;

    for(int i=1; i<p; i++) {
        if(i != p-1) {
            count++;
            count += arr[i];
        } else {
            count++;
        }
    }

    if(count > c)
        cout << "NO";
    else
        cout << "YES";



}