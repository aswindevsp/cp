#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}
void check(int arr[], int n) {
    int xorSum = 0;
    for(int i=0;i<n;i++) {
        xorSum = xorSum^arr[i];
    }

    int tempXor = xorSum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 0) {
        setbit = xorSum & 1;
        xorSum = xorSum >> 1;
        pos++;
    } 

    int newXor = 0;
    for(int i=0; i<n; i++) {
        if(setBit(arr[i], pos)) {
            newXor = newXor ^ arr[i];
        }
    }

    tempXor = tempXor^newXor;
    cout << newXor << endl;
    cout << tempXor << endl;



}
int main() {
    int arr[] = {2,3,4,6,7,2,3,4};
    check(arr, 8);
}