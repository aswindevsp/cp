#include <iostream>
using namespace std;
 
void solve(){
	string str;
	cin >> str;
	if(str.size() > 10){
		cout << str.front();
		cout << str.size() - 2;
		cout << str.back();
		cout << "\n";
	}else
		cout << str << "\n";
	
 
}
int main(){
			
    int t;
    cin >> t;
    while(t--)
    	solve();
 
    return 0;
}