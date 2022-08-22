#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[1] == 'W')
        cout << "Yes";
    cout << s.size();
    return 0;
}