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
	vs v;

	while (t--){
		int n, k;
		cin >> n >> k;

		bool f = true;
		rep(i,0,n){
			int temp;
			cin >> temp;
			if (f){
				if (i+1 == (n/2)+1 && temp == k){
					v.pb("yes");
					f=false;
					continue;
				}

				if (i != 0 && i != n-1 && temp==k){
					v.pb("yes");
					f=false;
				}
			}
		}
		if (f){
			v.pb("no");
		}
	}

	rep(i,0,v.size()){
		cout << v[i] << endl;
	}

	return 0;
}
