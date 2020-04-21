#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	for (unsigned i = 0; i < s.length(); i++){
		if (s[i] == '.'){
			cout << 0;
		}
		else if (s[i] == '-'){
			if (s[i+1] == '.'){
				cout << 1;
			}
			else {
				cout << 2;
			}
			i++;
		}
	}
	return 0;
}
