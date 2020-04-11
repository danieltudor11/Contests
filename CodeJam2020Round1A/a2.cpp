#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pi;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define pb push_back


void solve(vector<string> v){
	string s = v[0];
	for (unsigned i = 1; i < v.size(); i++){
		string front = "";
		string back = "";
		string s2 = v[i];
		
		//creating front
		string remain;
		int id;
		for (unsigned j = 0; j < min(s.length(), s2.length()); j++){
			id = j;
			if (s[j] == '*'){
				remain = s2;
				break;
			}
			if (s2[j] == '*'){
				remain = s;
				break;
			}
			
			if (s[j] != s2[j]){
				cout << "*";
				return;
			}
			front.pb(s[j]);
		}
		while (remain[id] != '*'){
			front.pb(remain[id]);
			id++;
		}
		
		//creating back
		reverse(s.begin(), s.end());
		reverse(s2.begin(), s2.end());
		
		for (unsigned j = 0; j < min(s.length(), s2.length()); j++){
			id = j;
			if (s[j] == '*'){
				remain = s2;
				break;
			}
			if (s2[j] == '*'){
				remain = s;
				break;
			}
			if (s[j] != s2[j]){
				cout << "*";
				return;
			}
			back.pb(s[j]);
		}
		
		while(remain[id] != '*'){
			back.pb(remain[id]);
			id++;
		}
		
		reverse(back.begin(), back.end());
		
		s = front + "*" + back;
	}
	
	
	for (unsigned i = 0; i < s.length(); i++){
		if (s[i] == '*'){
			s.erase(s.begin() + i);
			i--;
		}
	}
	
	cout << s;
}



int main(){
	int t;
	cin >> t;
	vector<vector<string> > v;
	for (int i = 1; i <= t; i++){
		int n;
		cin >> n;
		vector<string> temp;
		rep(i,0,n){
			string s;
			cin >> s;
			temp.push_back(s);
		}
		v.pb(temp);
	} 
	
	for (int i = 1; i <= t; i++){
		cout << "Case #" << i << ": ";
		solve(v[i-1]);
		cout << endl;
	}


	return 0;
}
