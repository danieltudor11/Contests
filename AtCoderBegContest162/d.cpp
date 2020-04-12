#include <iostream>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; i++)

int main(){
	int n;
	string s;
	cin >> n >> s;
	
	int temp;
	long long res = 0;
	rep(i,0,s.length()-3){
		rep(j,i+1,s.length()-1){
			if (s[i] == s[j]) continue;
			temp = j - i;
			rep(k,j+1,s.length()){
				if (s[i] == s[k]) continue;
				if (s[j] == s[k]) continue;
				
				if (k - j == temp) continue;
				
				res++;
			}
		}
	}
	cout << res;

	return 0;
}
