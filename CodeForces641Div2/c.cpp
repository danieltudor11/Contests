#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)

int gcd(int a, int b){
	if (b==0) return a;
	return gcd(b, a%b);
}

int main(){
	int t;
	cin >> t;

	vector<int> v(t);

	for(int i = 0; i < t; i++){
		cin >> v[i];
	}

	vi vl;
	rep(i,0,t){
		rep(j,i+1,t){
			vl.pb(v[i]*v[j]/gcd(v[i], v[j]));
		}
	}
	int res = vl[0];
	for (int i = 1; i < vl.size(); i++){
		res = gcd(res, vl[i]);
	}

	cout << res;

	return 0;
}