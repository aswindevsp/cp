#include<iostream>
using namespace std;
int find(int arr[], int bal){
    for(int i=5; i>=0; i--){
        if(arr[i] <= bal)
            return arr[i];
    }
}
void solve(){
    int n;
    cin >> n;
    int arr[6] = {1,2,5,10,50,100};
    int bal, count=0;
    int temp = 0;
    while(temp != n){
        bal = n - temp;
        temp += find(arr,bal);
        count++;
    }
    cout << count << endl;
}
int main(){
    int t; 
    cin >> t;
    while(t--)
        solve();

    return 0;
}