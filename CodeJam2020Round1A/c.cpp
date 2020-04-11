#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pi;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define pb push_back


void solve(vector<vector<double> > v){	
	int total = 0;
	
	vector<pi> pairs;
	while(1){		
		for (unsigned i = 0; i < v.size(); i++){
			for (unsigned j = 0; j < v[0].size(); j++){
				total += v[i][j];
				
				
				if (!v[i][j]){
					continue;
				}
				
				double num = 0;
				double sum = 0;
				
				//left
				for (int k = j - 1; k >= 0; k--){
					if (v[i][k]){
						sum += v[i][k];
						num++;
						break;
					}
				}
				
				//right
				for (int k = j + 1; k < v[0].size(); k++){
					if (v[i][k]){
						sum += v[i][k];
						num++;
						break;
					}
				}
				
				//up
				for (int k = i - 1; k >= 0; k--){
					if (v[k][j]){
						sum += v[k][j];
						num++;
						break;
					}
				}
				
				//down
				for (int k = i + 1; k < v.size(); k++){
					if (v[k][j]){
						sum += v[k][j];
						num++;
						break;
					}
				}
				double av = 0;
				
				if (num){
					av = sum / num;
				}
				
				if (av > v[i][j]){
					pairs.pb(make_pair(i, j));
				}
			}
		}		
		if (!pairs.size()){
			break;
		}
		for (int i = 0; i < pairs.size(); i++){
			v[pairs[i].first][pairs[i].second] = 0;
		}
		pairs.clear();
	}
	cout << total;
}



int main(){
	int t;
	cin >> t;
	vector<vector<vector<double> > > v;
	for (int i = 1; i <= t; i++){
		int r, c;
		cin >> r >> c;
		
		vector<vector<double> > v2;
		for (int j = 0; j < r; j++){
			vector<double> v3;
			for (int k = 0; k < c; k++){
				double t;
				cin >> t;
				v3.pb(t);
			}
			v2.pb(v3);
		}
		v.pb(v2);		
	} 

	for (int i = 1; i <= t; i++){
		cout << "Case #" << i << ": ";
		solve(v[i-1]);
		cout << endl;
	}

	return 0;
}
