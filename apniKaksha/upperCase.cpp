#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin >> s;

    sort(s.begin(), s.end(), greater<int>());
    int count = 0;
    int tempCount = 0;
    for(auto it = s.begin()+1; it < s.end(); it++) {
        if((*it-1) == *it) {
            count++;
        } else {
            if()
        }
    }
    cout << count;
}