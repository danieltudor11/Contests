#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


int solve(){
	int n;
	cin >> n;
	
	int k = 3;
	int power = 2;
	while (n%k){
		k += pow(2,power);
		power++;
	}
	return n/k;
}




int main(){
	int t;
	cin >> t;
	
	vi v;
	
	while (t--){
		v.pb(solve());
	}
	for (int i = 0; i < (int)v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}
