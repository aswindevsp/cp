#include <bits/stdc++.h>
using namespace std;
void solve(){

    int n , k; // string length and max substring length
    string str;
    cin >> n >> k >> str;

    int out = stoi(str.substr(0,k), 0, 2);
    
    int temp;
    for(int i=1; i<(str.size()-(k-1)); i++){
        temp = stoi(str.substr(i,k), 0, 2);
        out ^= temp;
    }

    string temp1 = bitset<64> (out).to_string();
    int count = 0;
    for(int i=0; i<64; i++){
        if(temp1[i] == '1')
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