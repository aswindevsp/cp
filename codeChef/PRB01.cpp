#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string solve(){
    int n;
    cin >> n;
    if(n == 1)
        return "no \n";
    for(int i=2; i<=n/2; i++){
        if(n%i == 0 && n != i)
            return "no \n";
    }
    return "yes \n";
}
int main(){

    int t; 
    cin >> t;
    while(t--)
        cout << solve();
    return 0;
}