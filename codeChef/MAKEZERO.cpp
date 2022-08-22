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
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int count = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 2 != 0) {
            arr[i]--;
            count = 1;
        } 
    }
    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr.size(); j++) {
            if((i != j && arr[i] == arr[j]) || arr[i] == 0) {
                arr.erase(arr.begin()+j);
                j--;
            }
        }
    }  

    count += arr.size();
    cout << count;

}