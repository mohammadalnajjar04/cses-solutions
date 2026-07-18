/*
Task Name: Repetitions
Link: https://cses.fi/problemset/task/1069

Description:
You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input:
The only input line contains a string of n characters.

Output:
Print one integer: the length of the longest repetition.

Constraints:
1 <= n <= 10^6

Example:
Input:
ATTCGGGA

Output:
3
*/

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
