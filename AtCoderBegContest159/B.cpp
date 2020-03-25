#include <bits/stdc++.h>
using namespace std;

bool isPal(string s){
	for (unsigned i = 0; i <= s.length() / 2; i++){
		if (s[i] != s[s.length() - i - 1]){
			return false;
		}
	}
	return true;
}



int main(){
	string s;
	cin >> s;
	string result = "No";

	if (isPal(s)){
		string s1 = s.substr(0, s.length() / 2);
		if (isPal(s1)){
			result = "Yes";
		}
	}
	cout << result;

	return 0;
}
