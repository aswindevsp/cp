#include <iostream>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int n;
    cin >> n;

    if(n%2 == 0)
    	cout << n/2 + 1;
    else
    	cout << (n-1)/2 + 1;

    nLine;
}
int main(){
			
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}