#include <bits/stdc++.h>
using namespace std;
int sum(int n) {    
    if(n == 0)
        return n;

    int prvSum = sum(n-1);
    return n + prvSum;
}
int main() {
    
    int n = 10;
    sum(n);
}