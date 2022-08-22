#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int n;
    cin >> n;

    int arr[n*2];
    for(int i=0; i<n*2; i++)
        cin >> arr[i];

    int maxCount = 0;
    int onBus = 0;
    for(int i=1; i<n*2; i++){
        if(i%2 == 1)
            onBus += arr[i];
        else
            onBus -= arr[i];

        maxCount = max(onBus, maxCount);
    }

    cout << maxCount;
    
}
int main(){
			
    int t;
    //cin >> t;
    //while(t--)
    //    solve();
    solve();
    return 0;
}