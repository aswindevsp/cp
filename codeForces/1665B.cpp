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

int maxCountPos(int arr[], int n) {
    int count[n] = {0};
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if((arr[i] == arr[j]) && (i != j)) {
                count[i]++;
            } 
        }
    }

    int out = 0;
    for(int i=1; i<n; i++) {
        if(count[out] < count[i]) {
            out = i;
        }
    }
    return out;
}
void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int maxCount = maxCountPos(arr, n);
    int outCount = 0;
    cout << maxCount;
   
    
}