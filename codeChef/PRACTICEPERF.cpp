#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[4];

    for(int i=0; i<4; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int count = 0;
    for(int i=0; i<4; i++) {
        sum += arr[i];
        count++;
        if(sum >= 10){
            cout << count;
            return 0;
        }
    }
    cout << 0;
}