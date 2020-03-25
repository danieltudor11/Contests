#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int q;
	cin >> q;

	bool rev = false;

	int instruction;
	int f;
	string s2;
	string sr = s;

	while (q--){
		cin >> instruction;

		if (instruction == 1){
			rev = !rev;
		}
		else if (instruction == 2){
			cin >> f >> s2;
			if (f == 1){
				if (!rev){
					s = s2 + s;
					sr += s2;
				}
				else {
					s += s2;
					sr = s2 + sr;
				}
			}
			else{
				if (!rev){
					s += s2;
					sr = s2 + sr;
				}
				else {
					s = s2 + s;
					sr += s2;
				}
			}
		}
	}

	if (rev) {
		cout << sr;
		return 0;
	}

	cout << s;

	return 0;
}
