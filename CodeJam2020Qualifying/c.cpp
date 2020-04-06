#include <bits/stdc++.h>
using namespace std;

string test(vector<pair<int, string> > v, int n){
	if (v.size() == 4){
		return "CJ";
	}
	map<int, char> map;
	vector<pair<int, int> > x = v;
	sort(v.begin(), v.end());
	
	
	int c, j;
	c = INT_MIN;
	j = INT_MIN;
	string res = "";
	
	for (unsigned i = 0; i < v.size(); i++){
		if (v[i].first < c && v[i].first < j){
			return "IMPOSSIBLE";
		}
		
		if (v[i].first >= c){
			map[v[i].first] = 'C';
			c = v[i].second;
			continue;
		}
		if (v[i].first >= j){
			map[v[i].first] = 'J';
			j = v[i].second;
		}
	}
	
	for (int i = 0; i < n; i++){
		res.push_back(map[x[i].first]);
	}
	return res;
}



int main(){
	int t;
	cin >> t;
	
	vector<string> res;
	for (int i = 1; i <= t; i++){
		int n;
		cin >> n;
		vector<pair<string, int> > in;
		for (int i = 0; i < 2*n; i++){
			pair<int, string> p1, p2;
			cin >> p1.first >> p2.first;
			p1.second = "s";
			p2.second = "e";
			
			in.push_back(p1);
			in.push_back(p2);
		}
		res.push_back(test(in));
	}
	
	
	for (int i = 0; i < t; i++){
		cout << "Case #" << i+1 << ": " << res[i] << endl;
	}
	
	return 0;
}
