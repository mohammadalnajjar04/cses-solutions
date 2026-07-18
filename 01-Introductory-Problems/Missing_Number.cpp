/*
Task Name: Missing Number
Link: https://cses.fi/problemset/task/1069

Description:
You are given all numbers between 1,2,…,n except one. 
Your task is to find the missing number.

Input:
The first input line contains an integer n.

The second line contains n-1 numbers. Each number is distinct and between 1 
and n (inclusive).

Output:
Print the missing number.

Constraints:
2 <= n <= 2 * 10^5

Example:
Input:
5
2 3 1 5

Output:
4
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long n;
	cin >> n;
	
	long long total_sum = n * (n + 1) / 2;
	long long current_sum = 0;
	
	for(int i = 0; i < n-1; i++){
		int num;
		cin >> num;
		current_sum += num;
	}
	
	cout << total_sum - current_sum << "\n";
	
	return 0;
}
