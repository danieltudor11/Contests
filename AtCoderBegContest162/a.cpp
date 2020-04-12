#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mi;

#define rep(i,a,b) for (int i = a; i < b; i++)




int main(){
	int n;
	cin >> n;
	
	while (n){
		int temp = n % 10;
		if (temp == 7){
			cout << "Yes";
			return 0;
		}
		n /= 10;
	}
	cout << "No";








	return 0;
}
