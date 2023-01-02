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
    string s;
    cin >> n >> s;
    
    int i = 0;
    int count = 1;
   
    int flag = 0;
    for(int i=1; i<n; i++) {
        if(s[i] == 'Q') {
            count++;
        }
        else if(s[i] == 'A') {
            if(count != 0)
                count--;
        }
    }

    if(count != 0) 
        cout << "NO";
    else 
        cout << "YES";
}