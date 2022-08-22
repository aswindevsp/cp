#include <iostream>
#include <map>
#include <cctype>
using namespace std;
void solve(){
    
    map <char, string> ship;
    ship.insert(pair<char, string> ('b', "BattleShip"));
    ship.insert(pair<char, string> ('c', "Cruiser"));
    ship.insert(pair<char, string> ('d', "Destroyer"));
    ship.insert(pair<char, string> ('f', "Frigate"));

    char x;
    cin >> x;
    x = tolower(x);

    map<char, string>::iterator it;
    for(it = ship.begin(); it != ship.end(); it++){
        if(it->first == x){
            cout << it->second << endl;
            break; 
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