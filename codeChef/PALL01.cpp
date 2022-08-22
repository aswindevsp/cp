#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int rev = 0;
    int copy = n;
    while(copy != 0){
        int rem = copy % 10;
        copy /= 10;
        rev = (rev * 10) + rem;
    }
    rev == n ? cout << "wins \n" : cout << "losses \n"; 
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}