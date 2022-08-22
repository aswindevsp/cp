// Logi = In n digit number there will be always a number that starts with 3 and ends with 3 and 0's in the middle
#include <iostream>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            if(i == 1 || i == n )  
                cout << 3;
            else
                cout << 0;
        }
        cout << endl;

    }
}