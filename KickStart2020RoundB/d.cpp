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
	double res = 100;
	
	probs[0][0] = 100;
	if (check(0,1,l,u,r,d)) res -= 50;
	if (check(1,0,l,u,r,d)) res -= 50;
	
	
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
			
			
			if (i != h-1 && check(i+1,j,l,u,r,d)){
				res -= probs[i][j] / 2;
				if (w == 1){
					res -= probs[i][j] / 2;
				}
			}
			if (j != w-1 && check(i,j+1,l,u,r,d)){
				res -= probs[i][j] / 2;
				if (h == 1){
					res -= probs[i][j] / 2;
				}
			}
		}
	}
	
	
	return res/100;
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
