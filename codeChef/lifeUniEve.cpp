#include <iostream>
using namespace std;
int main(){
    
    int temp;   
    while (true){
        cin >> temp;
        if (temp == 42){
            break;
        }else{
            cout << temp << endl;
        }
    }
    return 0;
}