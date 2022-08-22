#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int a, b;
    cin >> a >> b;

    int count = 0;
    while(a <= b){
    	count ++;
    	a*=3;
    	b*=2;
    }	

    cout << count;
}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();
	solve();
    return 0;
}