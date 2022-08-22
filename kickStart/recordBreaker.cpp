#include <iostream>
using namespace std;
void solve(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int flag = 1;
    int count = 0;
    int prvMax = arr[0];
    for(int i=1; i<n; i++){
    
        if(arr[i] < prvMax ){
            if(prvMax == arr[i-1])
                count ++;

            
        }else{
            if(i == n-1){
                if(arr[i] > prvMax)
                    count++;
            }
            prvMax = arr[i];
        }
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