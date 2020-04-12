#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mi;

#define rep(i,a,b) for (int i = a; i < b; i++)

int gcd(int a, int b){
	if (a == 0) return b;
	return gcd(b % a, a);
}



int main(){
	int n;
	cin >> n;
	
	
	long long res = 0;
	
	rep(i,1,n+1){
		rep(j,1,n+1){
			rep(k,1,n+1){
				if (i == 1 || j == 1 || k == 1){
					res += 1;
					continue;
				}
				
				int temp1 = gcd(i,j);
				int g = gcd(temp1, k);
				
				
				res += g;			
			}
		}
	}
	
	cout << res;




	return 0;
}
