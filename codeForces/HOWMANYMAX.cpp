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

    int count = 0;
    
    if(s[0] == '1')
        count++;
    
    if(s[s.size()-1] == '0')
        count++;

    char f = '0';
    for(int i=1; i<s.size() - 1; i++) {
        if(s[i] == '0' && s[i] == '1')
            count++;
    } 

    cout << count;
       
}