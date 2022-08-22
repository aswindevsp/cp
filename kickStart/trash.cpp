#include <iostream>
#include <string>
using namespace std;

const int INF = 1e9;

char S[500050];
int N, D[500050];

void solve(){
    cin >> N >> S+1;
    for(int i=1; i<=N; i++){
        D[i] = (S[i] == '1' ? 0: INF);
    }
    for(int i=2; i<=N; i++) 
        D[i] = min(D[i], D[i-1] + 1);
    for(int i=N-1; i;i--)
        D[i] = min(D[i], D[i+1]+1);

    long long ans = 0;
    for(int i=1; i<=N; i++)
        ans += D[i];
    cout << ans << endl;
}
int main(){
    int T;
    cin >> T;
    for(int t=1; t<=T; t++){
        cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}