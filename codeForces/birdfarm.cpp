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
    int x, y, z;
    cin >> x >> y >> z;
    if((z%x == 0) && (z%y == 0)){
        cout << "ANY";
    } else if(z%x == 0){
        cout << "CHICKEN";
    } else if(z%y == 0 ){
        cout << "DUCK";
    } else {
        cout << "NONE";
    }
}