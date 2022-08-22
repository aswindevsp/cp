#include <iostream>
#include <algorithm>
using namespace std;

int totalScore(int a, int b, int c, int x, int y, int z){
    int time = 0;
    int score = 0;
    for(int i=1; i<=20; i++){
        if(time + a <= 240){
            score += x;
            time += a;
        }else
            return score;
    }
    for(int i=1; i<=20; i++){
        if(time + b <= 240){
            score += y;
            time += b;
        }else
            return score;
    }
    for(int i=1; i<=20; i++){
        if(time + c <= 240){
            score += z;
            time += c;
        }else
            return score;
    }
    return score;
}

void solve(){
    int a, b, c;
    int x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;
 
    int score[6];
    score [0] = totalScore(a,b,c,x,y,z);
    score [1] = totalScore(a,c,b,x,z,y);
    score [2] = totalScore(b,a,c,y,x,z);
    score [3] = totalScore(b,c,a,y,z,x);
    score [4] = totalScore(c,a,b,z,x,y);
    score [5] = totalScore(c,b,a,z,y,x);
     
    sort(score, score+6);
    cout << score[5] << endl; 
    
}
int main(){

    int t;  
    cin >> t;
    while(t--){
        solve();
    }
}