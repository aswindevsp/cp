#include <iostream>
#include <string>
using namespace std;
void solve(){
    int hills, valleys;
    int start_flag;
    string out = "";

    cin >>hills >> valleys;
    

    if(hills > valleys){
        for(int i=0; i<valleys+1; i++){
            out+="01";
        }
        out.push_back('0');

        for(int i=0; i<hills-valleys-1; i++){
            out+="010";
        }

    }else if(valleys > hills){
        for(int i=0; i<hills+1; i++){
            out+="10";
        }
        out.push_back('1');

        for(int i=0; i<hills-valleys-1; i++){
            out+="101";
        }
    }else{
        for(int i=0; i<hills+1; i++){
            out+="01";
        }
        
    }

    cout << out.size() << endl;
    cout << out << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    
}