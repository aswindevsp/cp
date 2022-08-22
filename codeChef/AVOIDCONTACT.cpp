#include <iostream>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int x , y;  // x = total  y = chickenpox
    cin >> x >> y;

    int rooms = x-y;

    if(x == y)
    	rooms = x*2 - 1;
    else if(x > 0)
    	rooms += y*2;
    
    cout << rooms;

    nLine;
}
int main(){
			
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}