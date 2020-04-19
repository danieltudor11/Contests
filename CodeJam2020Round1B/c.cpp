#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


int solve(){




}


int main(){
	int t;
	cin >> t;
	
	vector<> res (t);
	//get input
	rep(i,0,t){
		
		res[i] = solve();
	}

	//produce output
	rep(i,0,t){
		cout << "Case #" << i+1 << ": " < res[i] << endl;
	}
	
	return 0;
}
