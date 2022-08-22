#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int spf[100] = {0};
    for(int i=2;i<=n;i++) {
        spf[i]=i;
    }

    for(int i=0; i<15; i++) {
        cout << spf[i] << " ";
    }
    cout << endl;

    for(int i=2;i<=n;i++) {
        if(spf[i]==i) {
            for(int j=i*i; j<=n; j+=i) {
                if(spf[j] == j) {
                    spf[j]=i;
                }
            }
        }
    }
    for(int i=0; i<15; i++) {
        cout << spf[i] << " ";
    }
    cout << endl;

    while(n!=1) {
        cout << spf[n] << " ";
        n = n/spf[n];
    }
}
int main() { 
    int n = 9;
    solve(n);
}