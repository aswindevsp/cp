#include <iostream>
using namespace std;
void solve(){
    char company[3];
    char company_offered[2];

    for(int i=0; i<3; i++)
        cin >> company[i];
    
    for(int i=0; i<2; i++)
        cin >> company_offered[i];

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            if(company[i] == company_offered[j]){
                cout << company[i] << endl;
                j=3; //To break loop
                i=2; //To break loop
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}