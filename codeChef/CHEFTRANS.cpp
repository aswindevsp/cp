#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x, y, z;
    cin >> x >> y >> z;
    if(z > (x+y))
        cout << "PLANEBUS" << endl;
    else if(z < (x+y))
        cout << "TRAIN" << endl;
    else 
        cout << "EQUAL" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}