#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	long long moves = 0; 
	long long prev_num, current_num;
	
	cin >> prev_num; 
	
	for(int i = 1; i < n; i++){
		cin >> current_num; 
		 
		if(current_num < prev_num){
			moves += (prev_num - current_num); 
		}else{
			prev_num = current_num; 
		}
	}
	cout << moves << "\n";

    return 0;
}
