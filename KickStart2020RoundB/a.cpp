#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


int main(){
	int t;
	cin >> t;
	
	vvi v;
	
	rep(i,1,t+1){
		int n;
		cin >> n;
		
		vi v1;
		
		rep(i,0,n){
			int temp;
			cin >> temp;
			v1.pb(temp);
		}
		v.pb(v1);	
	}
	
	
	rep(i,0,t){
		cout << "Case #" << i+1 << ": ";
		int count = 0;
		rep(j,1,(int)v[i].size()-1){
			if (v[i][j] > v[i][j-1] && v[i][j] > v[i][j+1]){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}

