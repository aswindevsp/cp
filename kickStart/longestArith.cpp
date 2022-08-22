#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int prv = 2;
    int d = arr[1] - arr[0];
    int count = 2;
    for(int i=2; i<n; i++){
        if(arr[i] - arr[i-1] == d)
            prv++;
        else{
            prv = 2;
            d = arr[i] - arr[i-1];
        }
        count = max(count, prv);
    }
    cout << count << endl;
    
}
int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        cout << "Case #" << i << ": ";
        solve();
    }
}