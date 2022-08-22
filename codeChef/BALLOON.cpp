// n question numbered randomly from 1 to n. Chef need 1 to 7 answers. How many question to solve befor 
#include <bits/stdc++.h>
using namespace std;\
void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int max = 0;
    for(int i=1; i<=7; i++){
        for(int j=0; j<n; j++) {
            if(arr[j] == i) {
                if(j > max)
                    max = j;
                break;
            }
        }
    } 
    cout << max + 1;
    cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}