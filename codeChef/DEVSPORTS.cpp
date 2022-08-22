#include <bits/stdc++.h>
using namespace std;
void solve(){
    int z, y, a, b, c;
    cin >> z >> y >> a >> b >> c;
    z -= y;
    if(z >= (a+b+c))
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}