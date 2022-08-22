#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){
	
	int n;
	cin >> n;
	string str;
	cin >> str;

	int count = 0;
	for(int i=0; i<n-1; i++){
		if(str[i] == str[i+1])
			count++;
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