#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str; 
    for(int i=0; i<n; i++){
        if(str[i] == 'c'){
            if(str.substr(i, 4) == "code"){
                cout << "AC" << endl;
                break;
            }
            if(str.substr(i, 4) == "chef"){
                cout << "WA" << endl;
                break;
            }
        }       
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}