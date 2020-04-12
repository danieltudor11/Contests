#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mi;

#define rep(i,a,b) for (int i = a; i < b; i++)

int mod = 1e9 + 7;

int gcd(int a, int b){
	if (a == 0){
		return b;
	}
	return gcd(b % a, a);
}

int findgcd(vector<int> v, int n){
	int res = v[0];
	for (int i = 1; i < n; i++){
		res = gcd(v[i], res);
	}
	return res;
}


int main(){
	int n, k;
	cin >> n >> k;
	
	





	return 0;
}
