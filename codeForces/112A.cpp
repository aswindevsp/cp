#include <iostream>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    string a, b;
    cin >> a >> b;

    for(int i=0; i<a.size(); i++){
        if(tolower(a[i]) >  tolower(b[i])){
            cout << "1";
            break;
        }
        else if(tolower(a[i]) < tolower(b[i])){
            cout << "-1";
            break;
        }
        else if(i == a.size()-1 && tolower(a[i]) == tolower(b[i])){
            cout << "0";
            break;
        }
    }



}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();
 	solve();
}