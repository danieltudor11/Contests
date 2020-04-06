#include <bits/stdc++.h>
using namespace std;

string test(vector<pair<int, int> > v){
	vector<pair<int, int> > c, j;
	string res = "";
	
	for (unsigned i = 0; i < v.size(); i++){
		bool cpos = true;
		for (unsigned k = 0; k < c.size(); k++){
			if (v[i].first == c[k].second || v[i].second == c[i].first){
				break;
			}
			if (v[i].first <= c[k].first && v[i].second >= c[k].first){
				cpos = false;
				break;
			}
			if (v[i].first <= c[k].second && v[i].second >= c[k].second){
				cpos = false;
				break;
			}
			if (v[i].first >= c[k].first && v[i].second <= c[k].second){
				cpos = false;
				break;
			}
		}
		if (cpos){
			c.push_back(v[i]);
			res.push_back('C');
			continue;
		}
		
		bool jpos = true;
		for (unsigned k = 0; k < j.size(); k++){
			if (v[i].first == j[k].second || v[i].second == j[k].first){
				break;
			}
			if (v[i].first <= j[k].first && v[i].second >= j[k].first){
				jpos = false;
				break;
			}
			if (v[i].first <= j[k].second && v[i].second >= j[k].second){
				jpos = false;
				break;
			}
			if (v[i].first >= j[k].first && v[i].second <= j[k].second){
				jpos = false;
				break;
			}
		}
		if (jpos){
			j.push_back(v[i]);
			res.push_back('J');
			continue;
		}
		
		return "IMPOSSIBLE";
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
		
		vector<pair<int, int> > in;
		for (int i = 0; i < n; i++){
			pair<int, int> p;
			cin >> p.first >> p.second;
			in.push_back(p);
		}
		if (n == 2){
			res.push_back("CJ");
			continue;
		}
		res.push_back(test(in));
	}
	
	
	for (int i = 0; i < t; i++){
		cout << "Case #" << i+1 << ": " << res[i] << endl;
	}
	
	return 0;
}
