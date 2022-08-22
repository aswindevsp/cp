#include <bits/stdc++.h>
using namespace std;
void solve(int n) {
    int arr[n+2] = {0};
    for(int i=2; i<=n; i++) {
        if(arr[i] == 0) {
            for(int j=i*i; j<n; j+=i) {
                arr[j] = 1;
            }
        }
    }

    for(int i=2; i<n; i++) {
        if(arr[i] == 0)
            cout << i << " ";
    }
}
int main() {
    int n;
    cin >> n;
    solve(n);
}