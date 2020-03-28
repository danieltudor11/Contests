#include <bits/stdc++.h>
using namespace std;

int main(){

	long long x;
	cin >> x;
	
	long long res = 0;
	
	while (x >= 500){
		res += 1000;
		x -= 500;
	}
	
	while (x >= 5){
		res += 5;
		x -= 5;
	}
	
	cout << res << endl;







	return 0;
}
