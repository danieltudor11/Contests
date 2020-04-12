#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mi;

#define rep(i,a,b) for (int i = a; i < b; i++)




int main(){
	int n;
	cin >> n;
	
	long long res = 0;
	rep(i,1,n+1){
		if (i % 3 == 0 || i % 5 == 0){
			continue;
		}
		else {
			res += i;
		}
		
	}
	cout << res;








	return 0;
}
