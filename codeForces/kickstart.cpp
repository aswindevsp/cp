#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]<s[i+1]){
            s.insert(i,1,s[i]);
            i++;
        }
    }

    cout << s << "\n";

}

int main() {
    int t;
    cin >> t;
    for(int k=1; k<=t; k++){
        cout << "Case #" << k << ": ";
        solve();
    }

    return 0;
}
