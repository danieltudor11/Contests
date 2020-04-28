#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> p;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


int main(){
	int t;
	cin >> t;
	vector<string> v;
	while (t--){
		string s;
		cin >> s;
		
		int ones = 0;
		int zeros = 0;
		
		for (int i = 0; i < (int)s.length(); i++){
			if (s[i] == '0'){
				zeros++;
			}
			else ones++;
		}
		
		if (!zeros || !ones){
			v.pb(s);
			continue;
		}
		if (abs(zeros - ones) >= 2){
			int div = 0;
			for (int i = 2; i <= s.length()/2 + 1; i++){
				if (!zeros%i && !ones%i){
					div = i;
				}
			}
			if (!div){
				v.pb(s);
				continue;
			}
			
			
			
		}
		
		
		if (zeros == ones){
			for (int i = 0; i < (int)s.length() - 1; i++){
				if (s[i] == s[i+1]){
					if (s[i] == '0'){
						s.insert(s.begin()+i+1, '1');
					}
					else s.insert(s.begin()+i+1, '0');
					i++;
				}
			}
			v.pb(s);
			continue;
		}
		
		if (abs(zeros - ones) == 1){
			bool first = false;
			if (s[0] == '1'){
				first = true;
			}
			string s1;
			for (int i = 0; i < (int)s.length(); i++){
				if (first){
					s1+= "10";
				}
				else s1+= "01";
			}
			v.pb(s1);
		}	
	
	}
	for (int i = 0; i < (int)v.size(); i++){
		cout << v[i] << endl;
	}
	

	return 0;
}
