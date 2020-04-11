#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pi;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define pb push_back


void solve(int n){
	if (n < 4) {
		for (int i = 1; i <= n; i++){
			cout << i << " 1" << endl;
		} 
		return;
	}
	
	int i = 3;
	cout << "1 1" << endl << "2 1" << endl;
	n -= 2;
	
	while (n >= i-1){
		cout << i << " 2" << endl;
		n -= i-1;
		i++;
	}
	i--;
	while (n){
		cout << i << " 1" << endl;
		n--;
		i++;
	}
}



int main(){
	int t;
	cin >> t;
	vi v;
	rep(i,0,t){
		int n;
		cin >> n;
		v.pb(n);
	} 
	
	rep(i,1,t+1){
		cout << "Case #" << i << ":" << endl;
		solve(v[i-1]);
	}

	return 0;
}
