#include <iostream>

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
