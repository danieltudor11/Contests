#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while (1){
		int x = ++n;
		set<int> s;
		while(x){
			int temp = x%10;
			s.insert(temp);
			x /= 10;
		}
		if (s.size() == 4){
			cout << n;
			return 0;
		}
		s.clear();
	}
	return 0;
}
