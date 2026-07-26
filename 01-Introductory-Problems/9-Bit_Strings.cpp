#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long ans = 1;
    long long MOD = 1000000007;

    for (int i = 0; i < n; i++) {
        ans = (ans * 2) % MOD;
    }
    cout << ans << "\n"; 
    
    return 0;
}
