#include <bits/stdc++.h>
using namespace std;

void solve(){
    int dep, buy;
    cin >> dep >> buy;
    int deps[dep];
    for(int i=0; i<dep; i++)
        cin >> deps[i];
    
    sort(deps, deps+dep, greater<int>());
    
    int temp = 0;
    int i;
    for(i=0; i<dep; i++){
        temp += deps[i];
        if(temp >= buy)
            break;
    }
    
    if(temp < buy)
        cout << "-1";
    else
        cout << i+1 ;
    
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}