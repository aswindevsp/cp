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
    string s, c;
    cin >> s >> c;
    
    int arrS[26] = {0};
    int arrC[26] = {0};

    for(int i=0; i<s.size(); i++) {
        arrS[s[i] - 'A']++;
    }

    for(int i=0; i<c.size(); i++) {
        arrC[c[i] - 'A']++;
    }

    for(int i=0; i<c.size(); i++) {
        if(arrS[c[i] - 'A'] - arrC[c[i]-'A'] < 0) {
            cout << "NO";
            return;
        }
    }

    cout << "YES";



}