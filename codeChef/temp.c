#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        switch(c){
            case 'b': case 'B':
            cout<<"BattleShip\n";
            break;
            case 'c': case 'C':
            cout<<"Cruiser\n";
            break;
            case 'd': case 'D':
            cout<<"Destroyer\n";
            break;
            default:
            cout<<"\n";
        }
    }
	return 0;
}