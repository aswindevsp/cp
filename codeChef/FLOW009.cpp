#include <iostream>
#include <iomanip>
using namespace std;
void solve(){
    double quandity, price, total = 0;
    cin >> quandity >> price;
    
    total = quandity * price;
    if(quandity > 1000)
        total = total - (total/10);

    cout << setprecision(6) <<total << endl; 
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}