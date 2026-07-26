#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long res = 1;
    
    while (n > 1) {
        res *= n;
        n--; 
    }
    
    cout << res;
    
    return 0;
}
