#include <iostream>
using namespace std;
typedef long long ll;
 
///////////////////////////////////////////////////////////////
 
void solve(){
	int n, k;
	cin >> n >> k;
	int arr[n];
 
	for(int i=0; i<n; i++)
		cin >> arr[i];
 
	int count = 0;
	int temp;
 
	for(int i=0; i<n; i++){
		if(arr[i] == 0)
			break;
		else if(i < k){
			count++;
		}else{
			if(arr[k-1] == arr[i]){
				count++;
			}
		}
	}
	cout << count <<"\n";
 
 
}
int main(){
			
    int t;
    //cin >> t;
    //while(t--)
    //	solve();
    solve();
 
    return 0;
}