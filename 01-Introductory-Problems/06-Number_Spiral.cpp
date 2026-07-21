/*
Problem Name: Number Spiral
Problem Link: https://cses.fi/problemset/task/1071
 
Description:
A number spiral is an infinite grid whose upper-left square has number 1.
Your task is to find out the number in row y and column x.
 
Input:
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.
 
Output:
For each test, print the number in row y and column x.
 
Constraints:
1 <= t <= 10^5
1 <= y, x <= 10^9

Example:
Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/
 
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long ans;

        if (y > x) {
            if (y % 2 == 0)
                ans = y * y - x + 1;
            else
                ans = (y - 1) * (y - 1) + x;
        } else {
            if (x % 2 == 0)
                ans = (x - 1) * (x - 1) + y;
            else
                ans = x * x - y + 1;
        }

        cout << ans << "\n";
    }

    return 0;
}
