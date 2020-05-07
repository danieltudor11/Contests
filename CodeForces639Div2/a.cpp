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
	
	while (t--){
		int n, m;
		cin >> n >> m;
		
		if (n == 1 || m == 1){
			cout << "YES" << endl;
			continue;
		}
		
		if (n == 2 && m == 2){
			cout << "YES" << endl;
			continue;
		}
		cout << "NO" << endl;
	}

	return 0;
}
