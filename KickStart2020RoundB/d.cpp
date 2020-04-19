#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)

bool check(int col, int row, int l, int u, int r, int d){
	if (row >= l-1 && row <= r-1 && col >= u-1 && col <= d-1){
		return true;
	}
	return false;
}

double solve(int w, int h, int l, int u, int r, int d){
	
	vector<vector<double> > probs(h, vector<double>(w));
	probs[0][0] = 100;
	
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			if (!i && !j) continue;
			if (check(i,j,l,u,r,d)){
				probs[i][j] = 0;
				continue;
			}
			
			double up = 0, left = 0;
			if (i) up = probs[i-1][j];
			if (j) left = probs[i][j-1];
			
			if (i == h-1) left *= 2;
			if (j == w-1) up *= 2;
			
			probs[i][j] = (left + up) / 2;		
		}
	}
	
	return probs[h-1][w-1]/100;
}


int main(){
	int t;
	cin >> t;
	
	vector<double> res;
	
	rep(i,1,t+1){
		int w, h, l, u, r, d;
		cin >> w >> h >> l >> u >> r >> d;
		double temp = solve(w,h,l,u,r,d); 
		res.pb(temp);
		
	}
	rep(i,1,t+1){
		cout << "Case #" << i << ": ";
		cout << fixed;
		cout << setprecision(6);
		cout << res[i-1] << endl;
	}

	return 0;
}
