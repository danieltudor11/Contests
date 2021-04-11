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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	
	int m = s.length();
	
	int c = 0;
	for (int i = 0; i < m/2; i++){
		if (s[i] != s[m-i-1]) c++;
	}
	
	cout << abs(k-c);
	


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
