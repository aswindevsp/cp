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
    string a, b;
    cin >> a >> b;

    int c1=0, c2=0, d1=0, d2=0;

    for(int i=0; i<a.size(); i++) {
            if(a[i] == '0') {
                c1++;
            } else {
                c2++;
            }

            if(b[i] == '0') {
                d1++;
            } else {
                d2++;
            }
    }

    int diffBits = min(c1,d2) + min(c2, d1);

    for(int i=0; i<diffBits; i++) {
        cout << 1;
    }

    for(int i=diffBits; i<a.size(); i++) {
        cout << 0;
    }


    
}