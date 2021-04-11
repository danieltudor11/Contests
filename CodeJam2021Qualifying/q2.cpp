#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


void solve(){
	int x, y;
	string s;
	cin >> x >> y >> s;
	int n = s.length();
	
	rep(i,0,n){
		if (s[i] == 'C' || s[i] == 'J') continue;
		char c1 = 'A', c2 = 'A';
		int j = i-1;
		while (j >= 0){
			if(s[j] != '?'){
				c1 = s[j];
				break;
			}
			j--;
		}
		j = i+1;
		while(j < n){
			if (s[j] != '?'){
				c2 = s[j];
				break;
			}
			j++;
		}
		if (c1 == 'A' && c2 == 'A'){
			cout << '0';
			return;
		}
		if (c1 == 'A'){
			s[i] = c2;
		}
		else if (c2 == 'A'){
			s[i] = c1;
		}
		else if (c1 == c2){
			s[i] = c1;
		}
		else if (c1 == 'C'){
			if (x > y) s[i] = 'C';
			else s[i] = 'J';
		}
		else if (c1 == 'J'){
			if (x > y) s[i] = 'J';
			else s[i] = 'C';
		}
	}
	int res = 0;
	for (int i = 0; i < n-1; i++){
		if (s[i] == 'C' && s[i+1] == 'J') res += x;
		else if (s[i] == 'J' && s[i+1] == 'C') res += y;
	}
	cout << res;
}


int main(){
	int t;
	cin >> t;

	rep(i,1,t+1){
		cout << "Case #" << i << ": ";
		solve();
		cout << endl;
	}

	return 0;
}
