#include <bits/stdc++.h>
using namespace std;

int main(){
	int x = 0, y = 0, z = 0;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		x += a;
		y += b;
		z += c;
	}
	
	if (x || y || z){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}

