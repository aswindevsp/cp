#include <iostream>
int sum(int n) {
    if(n == 0) {
        return n;
    }
    int prvSum = sum(n-1);
    return (n + prvSum);
}
using namespace std;
int main() {
    int n;
    cin >> n;   
    cout << sum(n);
}