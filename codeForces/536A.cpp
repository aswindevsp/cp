#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    ll k, n, w;
    cin >> k >> n >> w;

    ll total = w * k;
    cout << total%n;
}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();
	solve();
    return 0;
}