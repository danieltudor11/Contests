#include <bits/stdc++.h>
using namespace std;


int main(){
	map <int, int> m;
	int n; 
	cin >> n;
	if (n == 1){
		cout << 0;
		return 0;
	}
	
	vector<int> v;
	for (int i = 0; i < n; i++){
		int t;
		cin >> t;
		v.push_back(t);
		m[t]++;
	}
	
	
	
	long long sum = 0 ;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++){
		sum += (it -> second * (it -> second - 1)) / 2;
	}
	
	long long result;
	for (int i = 0; i < n; i++){
		result = sum - (m[v[i]] - 1);
		cout << result << endl;
	}



	return 0;
}
