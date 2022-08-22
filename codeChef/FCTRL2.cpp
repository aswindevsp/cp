#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int rem(int i){
    int x;
    while (i > 0){
        x = i % 10;
        i /= 10;
    }
    return x;
}

void solve(){
    int n; 
    cin >> n;
    vector<int> ans = {1} ;
    int temp = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < ans.size(); j++){
            ans[i] *= i;
            if(ans[i] > 10 ){
                temp = rem(ans[i]);
                ans[i] %= 10;
                if (i < ans.size()){
                    
                }else{
                    
                }
            }
        }
    }

}

int main(){
    int t;
    cin >> t;
    while (t--)
        solve(); 
}