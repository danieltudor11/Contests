#include <bits/stdc++.h>
using namespace std;

int test_case(){
	int n, b;
	cin >> n >> b;

	vector<int> v;
	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	if (v[0] > b){
		return 0;
	}
	int count = 0;
	while(v[count] <= b && count < v.size()){
		b -= v[count];
		count++;
	}

	return count;
}


int main(){
	int t;
	cin >> t;
	vector<int> v;
	for (int i = 1; i <= t; i++){
		int result = test_case();
		v.push_back(result);
	}

	for (unsigned i = 0; i < v.size(); i++){
		cout << "Case #" << i+1 << ": " << v[i] << endl;
	}
	return 0;
}
