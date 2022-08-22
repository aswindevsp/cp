#include <iostream>
#include <vector>
using namespace std;

void solve(){
   int n; 
   cin >> n;
   vector<int> v = {1};
   for(int i=1; i<=n; i++){
      for(int j=0; j<v.size(); j++){
         v[j] *= i;
         if(v[j] >= 10){
            if(v[j] == 10){
               int temp = v[j];
               v[j] = 0;
               v.push_back(temp);
            }else{
               int temp = v[j];
               v[j] = v[j]%10;
               v.push_back(temp);
            }
         } 
      }
   }
   for (int i=0; i<v.size();i++){
      cout << v[i] << " ";
   }
   
}

int main(){
   int t;
   cin >> t;
   while(t--)
      solve();

   return 0;
}

