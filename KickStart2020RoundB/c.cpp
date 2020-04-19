#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


ll mod = pow(10, 9);

ll x, y;


void solve(string s){
	stack<int> st;
	ll mult = 1;
	for (unsigned i = 0; i < s.length(); i++){
		if (s[i] < 58 && s[i] > 47){
			mult *= s[i] - 48;
			st.push(s[i] - 48);
			i++;
			continue;
		}
		if (s[i] == ')'){
			int temp = st.top();
			st.pop();
			mult /= temp;
			continue;
		}
		if (s[i] == 'N'){
			y -= mult;
			if (y < 0){
				y = mod + y%mod;
			}
		}
		else if (s[i] == 'S'){
			y += mult;
			if (y > mod){
				y = y%mod;
			}
		}
		else if (s[i] == 'E'){
			x += mult;
			if(x > mod){
				x = x%mod;
			}
		}
		else if (s[i] == 'W'){
			x -= mult;
			if (x < 0){
				x = mod + x%mod;
			}
		}
		if (!x) x+=mod;
		if (!y) y+=mod;
	}
}


int main(){
	int t;
	cin >> t;
	
	vector<string> v;
	
	
	rep(i,1,t+1){
		string s;
		cin >> s;
		
		v.pb(s);
	}
	rep(i,1,t+1){
		cout << "Case #" << i << ": ";
		x = 1;
		y = 1;
		solve(v[i-1]);
		cout << x << " " << y << endl;
	}

	return 0;
}
