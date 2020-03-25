#include <bits/stdc++.h>
using namespace std;


int test_case(){
	int n, k, p;
	int result = 0;
	cin >> n >> k >> p;
	vector< deque<int> > v;
	for (int i = 0; i < n; i++){
		deque<int> v1;
		for (int j = 0; j < k; j++){
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		v.push_back(v1);
	}
	
	
	pair<int, int> max; //first holds index, second holds total
	while(p){
		max.second = 0;
		for (int i = 0; i < (int)v.size(); i++){
			int sum = 0;
			for (int j = 0; j < min(p, (int)v[i].size()); j++){
				if (v[i].empty()){
					break;
				}
				sum += v[i][j];
			}
			if (sum > max.second){
				max.first = i;
				max.second = sum;
			}
		}
		result += v[max.first][0];
		v[max.first].pop_front();	
		p--;
	}
	
	return result;
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
