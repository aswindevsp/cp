#include <iostream>
using namespace std;
int sum(int d, int n){
    while(d--){
        n = (n*(n+1)) / 2;
    }
    return n;
}
void solve(){
    int d, n;
    cin >> d >> n;
    cout << sum(d, n) << endl;
}
int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}