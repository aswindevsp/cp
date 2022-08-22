#include <iostream>
#include <cmath>
using namespace std;
void solve(){
    int n; 
    int d; 
    cin >> n >> d;

    int newN = n; // Copy of the input number
    int count = 0;
    int c = 0;
    int rem;
    while(newN > 0){
        rem = newN % 10;
        newN /= 10;
        c++;
        if(rem == d){
            newN = newN*pow(10,c)+(rem+1)*pow(10,c-1);
            count = newN - n;
            c = 0;
        }
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