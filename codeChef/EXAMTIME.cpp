#include <bits/stdc++.h>
using namespace std;

struct person
{
    int dsa, toc, dm;
};

void solve(){
    person p1;
    person p2;
    cin >> p1.dsa >> p1.toc >> p1.dm;
    cin >> p2.dsa >> p2.toc >> p2.dm;

    int p1Total = p1.dsa + p1.toc + p1.dm;
    int p2Total = p2.dsa + p2.toc + p2.dm;

    if(p1Total > p2Total)
        cout << "Dragon";
    else if(p1Total < p2Total)
        cout << "Sloth";
    else if(p1Total == p2Total){
        if(p1.dsa > p2.dsa)
            cout << "Dragon";
        else if(p1.dsa < p2.dsa)
            cout << "Sloth";
        else if(p1.dsa == p2.dsa)
            if(p1.toc > p2.toc)
                cout << "Dragon";
            else if(p1.toc < p2.toc)
                cout << "Sloth";
            else if(p1.toc == p2.toc){
                if(p1.dm > p2.dm)
                    cout << "Dragon";
                else if(p1.dm < p2.dm)
                    cout << "Sloth";
                else    
                    cout << "TIE";
            }
    }
    cout << endl;
    

}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}