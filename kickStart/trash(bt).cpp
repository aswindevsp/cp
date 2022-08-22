#include <iostream>
#include <string>
using namespace std;
int right(int n, string s,int i){
    for(int j=i; j<n; j++){
        if(s[j] == '1')
            return (j-i);
    }
    return (1e9);
}
int left(int n, string s,int i){
    for(int j=i; j>=0; j--){
        if(s[j] == '1')
            return (i-j);
    }
    return (1e9);
}


int main(){

    int t; 
    cin >> t; 
    for(int i=1; i<=t; i++){
        cout << "Case #" << i << ": ";
        int n; 
        cin >> n; 
        string s;
        cin >> s;

        int sum = 0;
        for(int j=0; j<s.length(); j++){
            sum += min(right(n, s, j), left(n, s, j));
        }
        
        cout << sum << endl;
    }

}