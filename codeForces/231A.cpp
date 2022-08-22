#include <iostream>
using namespace std;
 
void solve(){
	int n, a, b, c;
	int count=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		if(a == b && b == 1)
			count++;
		else if(a == c && c == 1)
			count++;
		else if(b == c && c == 1)
			count++;
	}
	cout << count << "\n";
 
}
int main(){
			
    int t;
    //cin >> t;
    //while(t--)
    //	solve();
    solve();
 
    return 0;
}