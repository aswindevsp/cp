#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> factors(int n){
    int temp = n;
    vector<int> fac;
    while(temp != 0){
        if(n%temp == 0){
            fac.push_back(temp);
            }
        temp--;
    }
    return fac;
}

void solve(){
    int a, b;
    cin >> a >> b;
    vector<int> facA = factors(a);  //In desendgin order
    vector<int> facB = factors(b);  //In desendgin order
    vector<int> commonFac;

    int flag = 0;
    for(int i=0; i<facA.size(); i++){ // To find common gcd
        for(int j=0; j<facB.size(); j++){
            if(facB[j] < facA[i]){
                break;
            }else if (facB[j] == facA[i]){
                if(facB[j] != 1)
                    commonFac.push_back(facB[j]);
                if(flag == 0){
                    cout << facB[j] << " ";
                    flag = 1;
                }
            }
        }

    }

    int lcm = 1;
    while(true){
        int count = 0;
        for(int i=0; i<commonFac.size(); i++){
            count ++;
            if(a%commonFac[i] == 0 && b%commonFac[i] == 0){
                lcm *= commonFac[i];
                a = a / commonFac[i];
                b = b / commonFac[i];
                count--;
                break;
            }
        }
        if (count == commonFac.size()){
            lcm *= (a * b);
            break;
        }
    }

    cout << lcm;
    cout << endl;
    
   
}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}