#include <iostream>
using namespace std;
void solve(){
    int a, b;
    cin >> a >> b;
    if(a > 0 && b > 0)
        cout << "Solution \n"; 
    else if(b == 0 )
        cout << "Solid \n";
    else
        cout << "Liquid \n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}