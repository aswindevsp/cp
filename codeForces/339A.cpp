#include <iostream>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

  	string str;
  	cin >> str;
  	for(int i=0; i<str.size(); i+=2){
  		for(int j=i+2; j<str.size(); j+=2){
  			if(str[i] > str[j]){
  				char temp = str[i];
  				str[i] = str[j];
  				str[j] = temp;
  			}
  		}
  	}

  	cout << str;


}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();
	solve();
    return 0;
}