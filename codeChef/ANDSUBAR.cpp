#include <iostream>
#include <cmath>
using namespace std;
int setbits(int n){
    int ans = 0;
    while( n > 0){
        ans++;
        n = n >> 1;
    }
    return ans;
}
void solve(){
    int n;
    cin >> n;

    int N = setbits(n); 
    int ans1 = n - pow(2, N - 1)  + 1;
    int ans2 = pow(2, N - 1) - pow(2, N - 2);
    cout << max(ans1, ans2) << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}