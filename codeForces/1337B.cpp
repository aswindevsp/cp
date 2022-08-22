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
    int life, s1, s2;
    cin >> life >> s1 >> s2;

    for(int i=0; i<s1; i++) {
        int s1Dam = life/2 + 10;
        if(s1Dam < life){
            life = s1Dam;
        } else {
            break;
        }

        if(life <= 0){
            cout << "YES";
            return;
        }
    }

    for(int i=0; i<s2; i++) {
        life -= 10;
        if(life <= 0){
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}