#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int n;
    cin >>n;

    int arr[5] = {5, 4, 3, 2, 1};

    int count = 0; //Count min number of steps
    int temp = 0; // reference variable
    while(n > temp){
    	for(int i=0; i<5; i++){
    		if(arr[i] <= n){
    			count ++;
    			temp += arr[i];
    			break;
    		}
    	}
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