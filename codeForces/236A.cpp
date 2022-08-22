#include <iostream>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    string str;
    cin >> str;
   	
   	for(int i=0; i<str.size(); i++){
   		for(int j=i+1; j<str.size(); j++){
   			if(str[i] == str[j]){
   				str.erase(str.begin() + j);
   				j=j-1;
   			}
   		}
   	}

    if(str.size()%2 != 0)
    	cout << "IGNORE HIM!";
    else
    	cout << "CHAT WITH HER!";

}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();

	solve();

    return 0;
}