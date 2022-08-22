#include <iostream>
using namespace std;
void solve(){
    // 0 = Rainy day;
    int arr[7];

    int rainy = 0;
    int sunny = 0;

    for(int i=0; i<7; i++){
        cin >> arr[i];
        arr[i] == 0 ? rainy++ : sunny++;
    }

    sunny > rainy ? cout << "YES \n" : cout << "NO \n";

}

int main(){

    int t; 
    cin >> t;
    while(t--)
        solve();

    return 0;
}