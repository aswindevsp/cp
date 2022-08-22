#include <iostream>
using namespace std;
int main(){

    int T;
    cin >> T;

    for(int i=1; i<=T; i++)
    {
        
        int arr[4];

        for(int j=0; j<4; j++)
        {
            cin >> arr[j];
        }
        if ((arr[0] == arr[1]) && (arr[1] == arr[2]) && (arr[2] == arr[3])){
            cout<<"0"<<endl;
        }else if((arr[0] == arr[1] && arr[1] == arr[2]) || (arr[1] == arr[2] && arr[2] == arr[3]) || (arr[0] == arr[1] && arr[1] == arr[3]) || (arr[0] == arr[2] && arr[2] == arr[3])){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }

    }
    return 0;
}