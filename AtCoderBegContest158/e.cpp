#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
	string s;
	long long n, p;
	long long result = 0;
	
	cin >> n >> p >> s;
	
	int size = s.length();
	string s2;
	long long test;
	
	while (size > 0){
		for (unsigned i = 0; i < s.length() - size + 1; i++){
			s2 = s.substr(i, size);
			test = atoi(s2.c_str());
			if (!(test % p)){
				result++;
			}			
		}
		size--;
	}
	cout << result;
	
	return 0;
}
