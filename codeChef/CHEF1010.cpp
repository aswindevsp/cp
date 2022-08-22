#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; // Binary string length
    cin >> n; 
    string strB; // Binary string
    cin >> strB;

    int countA = 0;
    int countB = 0;
    for(int i=0; i<strB.size(); i++){
        if(strB[i] == '1')
            countA++;
        else    
            countB++;
    }

    int out = 0;
    if(min(countA, countB) >= 2){
    
        int finalCount = min(countA, countB)*2;
        finalCount -= 4;
        out = 1;
        if(finalCount != 0)
            out += (finalCount/2);
    }
    cout << out;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve(); // Starting Test Cases
    }
    

}