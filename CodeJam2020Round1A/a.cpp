#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pi;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define pb push_back


void solve(vector<string> v){
	int id = 0;
	string result = "";
	while (v.size() > 1){
		string s = v[0];
		char c = s[s.length()-1-id];
		if (c == '*'){
			v.erase(v.begin());
			continue;
		}
		result.insert(result.begin(), c);
		for (unsigned i = 1; i < v.size(); i++){
			s = v[i];
			if (s[s.length()-1-id] == '*'){
				v.erase(v.begin() + i);
				i--;
				continue;
			}
			if (s[s.length()-1-id] != c){
				cout << "*";
				return;
			}
			
		}
		id++;
	}
	cout << result;
}



int main(){
	int t;
	cin >> t;
	vector<vector<string> > v;
	for (int i = 1; i <= t; i++){
		int n;
		cin >> n;
		vector<string> temp;
		rep(i,0,n){
			string s;
			cin >> s;
			temp.push_back(s);
		}
		v.pb(temp);
	} 
	
	for (int i = 1; i <= t; i++){
		cout << "Case #" << i << ": ";
		solve(v[i-1]);
		cout << endl;
	}


	return 0;
}
