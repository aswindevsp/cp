#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int num, times;

    cin >> num >> times;

    for(int i=0; i<times; i++){
    	int rem;
    	rem = num%10;
    	if(rem != 0)
    		num--;
    	else
    		num /= 10;
    }

    cout << num;

}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();
	solve();
    return 0;
}