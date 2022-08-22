#include <iostream>
using namespace std;

int find(int arr[], int p){
    for(int i=11; i>=0; i--){
        if(arr[i] <= p)
            return arr[i];
    }
}
void solve(){
    int p;
    int n = 12;
    int arr[n] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    
    cin >> p;

    int temp = 0;
    int count = 0;
    while(temp != p){
        int temp2 = p - temp;
        temp += find(arr, temp2);
        count++;
    }

    cout << count << endl;
    
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}