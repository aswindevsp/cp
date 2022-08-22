#include <iostream>
using namespace std;
void solve() {
    // n=No. of teams.  k=postion to get max points.
    long long  n, k; 
    cin >> n >> k;

    int ans = 2*(n-k);
    ans += 2 * ((k - 1) / 2);
    cout << ans << endl;    
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}