#include <iostream>
using namespace std;
int main(){
    int n; // No of streets
    int k; // Max travel distance 
    cin >> n >> k;

    int arr[n]; 

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxValueJumpTimes = n / k;
    int streetsLeft = n - (maxValueJumpTimes * k);

    int ans = 1;
    
    for(int i=0; i<n; i+=(k-1)){
        ans *= arr[i];
    }

    cout << ans;
    return 0;

}