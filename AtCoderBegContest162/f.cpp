#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mi;

#define rep(i,a,b) for (int i = a; i < b; i++)




int main(){
	int n;
	cin >> n;
	vi v;
	rep(i,0,n){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	long long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	
	if (!(n % 2)){
		for (int i = 0; i < n; i+=2){
			sum1 += v[i];
		}
		for (int i = 1; i < n; i+=2){
			sum2 += v[i];
		}
		cout << max(sum1, sum2);
		return 0;
	}
	
	


	return 0;
}
