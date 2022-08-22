#include <iostream>
using namespace std;
int main(){

    int t;
    cin >> t; 
    while(t--){
        int n,m; //n = The total no of jobs      m = completed jobs
        cin >> n >> m;
        int arr[n];
        for(int i=0; i<n; i++){
            arr[i] = i+1;
        }
        for (int i=0; i<m; i++){
            int temp;
            cin >> temp;
            arr[temp-1] = 0; 
        }
        
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                for(int j=i+1; j<n; j++){
                    if(arr[j] != 0){
                        cout << arr[j] << " ";
                        arr[j] = 0;
                        i = j+1;

                        break;
                    }
                }
            }else{
                cout << arr[i] << " ";
                arr[i] = 0;
                i++;
            }
        }

        cout << endl;

        for(int i=0; i<n; i++){
            if (arr[i] == 0){
                continue;
            }else{
                cout << arr[i] << " ";
            }
        }

        
    }
}