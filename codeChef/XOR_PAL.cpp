#include <bits/stdc++.h>
using namespace std;

vector<int> notPaliPos(vector<int> s, int n) {
    vector<int> out;
    for(int i=0; i<n/2; i++) {
        if(s[i] != s[n-1-i])
            out.push_back(i);           
    }
    return out;
}
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for(int i=0; i<n/2; i++) {
        if(s[i] != s[n-i-1])
            count++;
    }

    cout << count;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("temp/input.txt", "r", stdin);
    freopen("temp/output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    
 
   return 0;
}
