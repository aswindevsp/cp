#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int check = 1;
        int arr[3]; // Wight on bags 
        int d,e;  //d = Max w on plane.    e = Max w on hand.
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
        cin >> d >> e;

        int sum = arr[0] + arr[1] + arr[2];
        
        for(int i=0; i<3; i++){
            if (arr[i] <= e){
                if(sum-arr[i] <= d){
                    check = 0;
                    break;
                }
            }
        }
        
        if(check == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl; 
        }
    }
}