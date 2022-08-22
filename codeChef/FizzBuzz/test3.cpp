#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void solve(){
    int n;
    cin >> n;
    double count = 0;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i-1] != s[i])
            count += 0.5;
    }
    cout << floor(count) << endl;
}
    
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}