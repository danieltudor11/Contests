#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, s2, s3;
	cin >> s;
	int n = 0;
	
	for (int i = 0; i < s.length(); i++){
		if (s[i] > 94){
			s3.push_back(s[i]);
			s2.push_back(s[i] - 32);
			n++;
		}
		else {
			s3.push_back(s[i] + 32);
			s2.push_back(s[i]);
			n--;
		}
	}
	if (n >= 0){
		cout << s3;
		return 0;
	}
	cout << s2;
	return 0;
}
