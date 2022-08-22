#include <iostream>
using namespace std; 
typedef long long ll;
int main(){
    
    int t;
    cin >> t;

    while(t--){

        ll n;
        cin >> n;

        int arr[n];
        int odd = 0;
        int even = 0;

        for(ll i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2 != 0){
                odd++;
            }else{
                even++;
            }
        }

        int oddI, evenI;
        if(n%2 == 0){
            oddI = n/2;
            even = n/2;
        }else{
            oddI = (n+1)/2;
            evenI = n-oddI;
        }


        int sum ; 

        sum = min(odd, evenI) + min(even, oddI);

       

        cout << sum << endl;
    }

    return 0;
    
}