#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


int main(){
	int t;
	cin >> t;
	
	vi res;
	
	while (t--){
		int n;
		cin >> n;
		int count = 0;
		while (n >= 2){
			int i = 2;
			ll sum = 2;
			while (sum <= n){
				i += 3;
				sum += i;
			}
			sum -= i;
			n -= sum;
			count++;
		}
		res.pb(count);
	}
	
	for (int i = 0; i < (int)res.size(); i++){
		cout << res[i] << endl;
	}

	return 0;
}
