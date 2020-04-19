#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


void solve(int a, int b){
	string s;
	for (int i = -5; i < 6; i++){
		for (int j = -5; j < 6; j++){
			cout << a << " " << b << endl;
			cout.flush();
			cin >> s;
			if (s == "CENTER"){
				return;
			}
		}
	}
}


int main(){
	int t, a, b;
	cin >> t >> a >> b;
	
	//get input
	rep(i,0,t){
		
		solve(a, b);
	}
	
	return 0;
}
