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
		int n, k;
		cin >> n >> k;

		while (n%2 && k){
			int i = 2;
			while (1){
				if (!n%i){
					n+=i;
					k--;
					break;
				}
				i++;
			}
		}
		
		cout << n+k*2 << endl;
	}

	return 0;
}
