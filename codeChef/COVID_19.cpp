#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m; // m = rows, n = seats 
    int c=0;
    for(int i=1; i<=n; i++)
    { 
        if(i%2!=0)
        {
            for(int j=1;j<=m;j++)
            {
                if(j%2!=0)
                {
                    c++;
                }
            }
        }
    }
    cout << c << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}