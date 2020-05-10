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
	int a, b, c, k;
	cin >> a >> b >> c >> k;

	int res = 0;
	while (a && k){
		a--;
		k--;
		res++;
	}
	while (b && k){
		b--;
		k--;
	}
	while (c && k){
		c--;
		k--;
		res--;
	}
	cout << res;
	return 0;
}
