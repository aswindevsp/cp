#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b; // Intial coins with Player A and Player B
    int c, d; // Coints Player c would be giving out

    cin >> a >> b >> c >> d;

    if(a < b)
        a += c;
    else    
        b += c;

    if(a < b)
        a += d;
    else    
        b += d;

    if(a >= b)
        cout << "N" << endl;
    else
        cout << "S" << endl;


}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}