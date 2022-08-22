#include <iostream>
using namespace std; 
int main(){

    float bal; 
    int with;
    cin >> with >> bal;

    if(bal >= (with+0.5) && with % 5 == 0){
        cout<<bal-(with+0.5);
    }else{
        cout<<bal;
    }
}