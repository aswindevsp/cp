#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp % 2 == 0)
            even++;        
        else    
            odd++;
    }

    if(even > odd)
        cout << "READY FOR BATTLE";
    else    
        cout << "NOT READY FOR BATTLE";
    
    return 0;
    
}