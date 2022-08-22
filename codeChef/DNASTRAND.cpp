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
    string s;
    cin >> s;

    for(int i=0; i<n; i++) {
        switch (s[i])
        {
        case 'A':
            s[i] = 'T';
            break;
        case 'T':
            s[i] = 'A';
            break;
        case 'C':
            s[i] = 'G';
            break;
        case 'G':
            s[i] = 'C';
            break;
        }
    }

    cout << s;
}