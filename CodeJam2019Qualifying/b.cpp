#include <bits/stdc++.h>
using namespace std;

string test(string s){
	string r = "";
	for (int i = 0; i < s.length(); i++){
		if (s[i] == 'E'){
			r.push_back('S');
		}
		else{
			r.push_back('E');
		}
	}
	return r;
}

int main(){
	int t;
	cin >> t;
	
	
	vector<string> v;
	for (int i = 1; i <= t; i++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		v.push_back(test(s));
	}		
		
		
	for (int i = 1; i <= t; i++){
		cout << "Case #" << i << ": " << v[i-1] << endl;
	}
	return 0;
}
