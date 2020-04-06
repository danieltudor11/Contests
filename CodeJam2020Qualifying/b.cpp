#include <bits/stdc++.h>
using namespace std;

string test(string s){
	int par = 0;
	unsigned i = 0;
	int j = 0;
	string res = "";
	
	while(i < s.length()){
		int temp = s[i] - 48;
		
		while (par != temp){
			if (temp > par){
				res.push_back('(');
				par++;
				j++;
			}
			if (temp < par){
				res.push_back(')');
				par--;
				j++;
			}
		}
		res.push_back(s[i]);
		i++;
	}
	
	while (par--){
		res.push_back(')');
	}
	
	return res;

}



int main(){
	int t;
	cin >> t;
	
	vector<string> res;
	
	for (int i = 1; i <= t; i++){
		string s;
		cin >> s;
		string r = test(s);
		res.push_back(r);
	}
	
	
	for (int i = 1; i <= t; i++){
		cout << "Case #" << i << ": " << res[i-1] << endl;
	}
	
	return 0;
}
