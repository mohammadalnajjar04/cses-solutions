#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {};

    for (int i = 0; i < s.length(); i++) {
    	freq[s[i] - 'A']++;
    }

    int odd = 0;
    char mid = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            odd++;
            mid = 'A' + i;
        }
    }

    if (odd > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string half = "";

    for (int i = 0; i < 26; i++) {
        half += string(freq[i] / 2, 'A' + i);
    }

    cout << half;

    if (mid)
        cout << mid;

    reverse(half.begin(), half.end());

    cout << half;

    return 0;
}
