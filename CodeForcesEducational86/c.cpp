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
	
	while (t--){
		int a, b, q;
		cin >> a >> b >> q;
		
		vi v;
		
		while (q--){
			ll x, y;
			cin >> x >> y;
			int res = 0;
			
			for (int i = x; i <= y; i++){
				if ((i%a)%b != (i%b)%a) res++;
			}
			
			v.pb(res);
		}
		for (int i = 0; i < (int)v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
			
	}

	return 0;
}
