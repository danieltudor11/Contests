#include <bits/stdc++.h>
using namespace std;

vector<int> test(vector<vector<int> > v){
	int a = 0, b = 0, c = 0;
	
	for (unsigned i = 0; i < v.size(); i++){
		a += v[i][i];
	}
	
	set<int> s1;
	for (unsigned i = 0; i < v.size(); i++){
		for (unsigned j = 0; j < v.size(); j++){
			if (s1.count(v[i][j]) == 1){
				b++;
				break;
			}
			s1.insert(v[i][j]);
		}
		s1.clear();
	}
	
	for (unsigned j = 0; j < v.size(); j++){
		for (unsigned i = 0; i < v.size(); i++){
			if (s1.count(v[i][j]) == 1){
				c++;
				break;
			}
			s1.insert(v[i][j]);
		}
		s1.clear();
	}

	vector<int> res;
	
	res.push_back(a);
	res.push_back(b);
	res.push_back(c);
	
	return res;

}



int main(){
	int t;
	cin >> t;
	vector<vector<int> > res;
	for (int i = 0; i < t; i++){
		int n;
		cin >> n;
		vector<vector<int> > input;
		for (int j = 0; j < n; j++){
			vector<int> t;
			for (int k = 0; k < n; k++){
				int temp;
				cin >> temp;
				t.push_back(temp);
			}
			input.push_back(t);
		}
		res.push_back(test(input));
	}
	
	for (int i = 0; i < t; i++){
		cout << "Case #" << i+1 << ":";
		for (int j = 0; j < 3; j++){
			cout << " " << res[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
