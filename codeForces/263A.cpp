#include <iostream>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    int n = 25;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int pos;
    for(int i=0; i<n; i++){
        if(arr[i] == 1)
            pos = i+1;
    }

    int col , row ;
    col = pos/5;

    if(pos%5 == 0)
        row = 5;
    else
        row = pos%5;


    if(row != 5)
        col++;

    cout << abs(3-col) + abs(3-row);


}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();

        solve();

    return 0;
}