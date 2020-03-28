#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, k;
	cin >> k >> n;
	
	
	int maxd = 0;
	
	int old;
	cin >> old;
	int temp;
	int first = old;
	maxd = old;
	
	for (int i = 1; i < n; i++){
		cin >> temp;
		maxd = max(maxd, temp - old);
		old = temp;
	}
		
	maxd = max(maxd, (k - temp) + first);
	
	cout << (k - maxd) << endl;







	return 0;
}
