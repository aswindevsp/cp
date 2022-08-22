#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n) {
    int xorSum = 0;
    for(int i=0;i<n;i++) {
        xorSum = xorSum^arr[i];
    }
    return xorSum;
}
int main() {
    int arr[] = {4,3,4,3,8};
    cout << check(arr, 5);
}