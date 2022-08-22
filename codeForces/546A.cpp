#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int intialCost, money, bananas;

    cin >> intialCost >> money >> bananas;

    int totalCost = 0;
    for(int i=1; i<=bananas; i++){
    	totalCost = totalCost + (i * intialCost);
    }

    if(totalCost > money)
    	cout << totalCost - money;
    else	
    	cout << "0";

}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();

	solve();

    return 0;
}