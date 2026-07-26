#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int current = 1;
    int best = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            current++;
        } else {
            current = 1;
        }

        if (current > best) {
            best = current;
        }
    }

    cout << best;

    return 0;
}
