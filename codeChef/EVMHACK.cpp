#include <bits/stdc++.h>
using namespace std;

#define nLine cout<<"\n";

typedef long long ll;

///////////////////////////////////////////////////////////////

void solve(){

	float chef[3];
	float total[3];

	for(int i=0; i<3; i++)
		cin >> chef[i];

	for(int i=0; i<3; i++)
		cin >> total[i];

	
	//Finding the most vote diff 
	int pos = 0;
	int diff = total[0]-chef[0];
	for(int i=1; i<3; i++){
		if(total[i]-chef[i] > diff){
			diff = total[i]-chef[i];
			pos = i;
		}
	}

	chef[pos] = total[pos];

	float chefSum = 0;
	float totalSum = 0;

	for(int i=0; i<3; i++)
		chefSum += chef[i];

	for(int i=0; i<3; i++)
		totalSum += total[i];

	if(chefSum > totalSum/2)
		cout << "YES";
	else 
		cout << "NO";

	nLine;
}
int main(){
			
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}