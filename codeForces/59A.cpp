#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

    string str;
    cin >> str;

    int upperCount = 0;
    int lowerCount;
    for(int i=0; i<str.size(); i++){
    	if(isupper(str[i]))
    		upperCount++;
    }

    lowerCount = str.size() - upperCount;

    if(upperCount > lowerCount){
    	transform(str.begin(), str.end(), str.begin(), ::toupper);
    	cout << str;
    }else{
    	transform(str.begin(), str.end(), str.begin(), ::tolower);
    	cout << str;
    }

}
int main(){
			
    //int t;
    //cin >> t;
    //while(t--)
    //    solve();
	solve();
    return 0;
}