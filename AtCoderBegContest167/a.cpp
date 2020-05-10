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
	string s, s1;
	cin >> s >> s1;

	s1.pop_back();

	if (s==s1) cout << "Yes";
	else cout << "No";


	return 0;
}
