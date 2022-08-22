#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n % 10 == 0)
        cout << 0;
    else if((n*2) % 10 == 0)
        cout << 1;
    else   
        cout << -1;
    
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}