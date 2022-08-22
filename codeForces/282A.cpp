#include <iostream>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

	int x = 0; //intial value of x
    int n;
    cin >> n;
    string arr[n];

    for(int i=0; i<n; i++)
    	cin >> arr[i];

    for(int i=0; i<n; i++){
    	if(arr[i][1] == '+')
    		x++;
    	else 
    		x--;
    }
    cout << x;

}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();
	solve();
    return 0;
}