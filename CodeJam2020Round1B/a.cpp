#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


string change(string res, bool xneg, bool yneg){
	for (int i = 0; i < (int)res.length(); i++){
		if (res[i] == 'S' && yneg){
			res[i] = 'N';
		}
		else if (res[i] == 'N' && yneg){
			res[i] = 'S';
		}
		else if (res[i] == 'W' && xneg){
			res[i] = 'E';
		}
		else if (res[i] == 'E' && xneg){
			res[i] = 'W';
		}
	}
	return res;
}

void changeall(string& s){
	for (int i = 0; i < (int)s.length(); i++){
		if (s[i] == 'S') s[i] = 'N';
		else if (s[i] == 'N') s[i] = 'S';
		if (s[i] == 'W') s[i] = 'E';
		else if (s[i] == 'E') s[i] = 'W';
	}
}


string solve(ll x, ll y){
	if (x%2 == y%2) return "IMPOSSIBLE";
	bool xneg = false, yneg = false;
	string res = "";
	
	if (x < 0){
		xneg = true;
		x *= -1;
	}
	if (y < 0){
		yneg = true;
		y *= -1;
	}
	
	ll div = 2;
	while (x || y){
		//cout << div << " ";
		if (x%div && y%div){
			return "IMPOSSIBLE";
		}
		if (x==div/2 && !y){
			res.pb('W');
			res = change(res, xneg, yneg);
			changeall(res);
			return res;
		}
		if (y==div/2 && !x){
			res.pb('S');
			res = change(res, xneg, yneg);
			changeall(res);
			return res;
		}
		
		long double temp;
		if (x%div){
			temp = (double) x/(2*div);
			temp -= x/(2*div);
			if (y%(2*div)){
				if (temp > 0.5){
					res.pb('E');
					x+=div/2;
				}
				else {
					res.pb('W');
					x-=div/2;
				}
			}
			else {
				if (temp > 0.5){
					res.pb('W');
					x-=div/2;
				}
				else {
					res.pb('E');
					x+=div/2;
				}
			}
		}
		else if (y%div){
			temp = (double) y/(2*div);
			temp -= y/(2*div);
			if (x%(2*div)){
				if (temp > 0.5){
					res.pb('N');
					y+=div/2;
				}
				else {
					res.pb('S');
					y-=div/2;
				}
			}
			else {
				if (temp > 0.5){
					res.pb('S');
					y-=div/2;
				}
				else {
					res.pb('N');
					y+=div/2;
				}
			}
		}
		//cout << x << " " << y << " " << res << endl;
		div *= 2;
	}
	


	for (int i = 0; i < (int)res.length(); i++){
		if (res[i] == 'S' && yneg){
			res[i] = 'N';
		}
		else if (res[i] == 'N' && yneg){
			res[i] = 'S';
		}
		else if (res[i] == 'W' && xneg){
			res[i] = 'E';
		}
		else if (res[i] == 'E' && xneg){
			res[i] = 'W';
		}
	}

	changeall(res);
	return res;
}


int main(){
	int t;
	cin >> t;
	
	vector<string> res(t);
	//get input
	rep(i,0,t){
		ll x, y;
		cin >> x >> y;
		res[i] = solve(x, y);
	}

	//produce output
	rep(i,0,t){
		cout << "Case #" << i+1 << ": " << res[i] << endl;
	}
	
	
	
	return 0;
}
