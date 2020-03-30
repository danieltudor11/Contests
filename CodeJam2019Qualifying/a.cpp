#include <bits/stdc++.h>
using namespace std;

 pair<string, string> test(string n){
    string a = "", b = "";
    for (int i = 0; i < n.length(); i++){
        if (n[i] == '4'){
			a.push_back('2');
			b.push_back('2');
		}
		else {
			a.push_back(n[i]);
			b.push_back('0');
		}
    }
   
    while (b[0] == '0'){
		b.erase(b.begin());
	}
    
    return make_pair(a, b);
    
}



int main(){
    int t;
    cin >> t;
    
    vector<pair<string, string> > v;
    for (int i = 1; i <= t; i++){
        string s;
        cin >> s;
        pair<string, string> p = test(s);
        v.push_back(p);
    }
    
    for (int i = 1; i <= t; i++){
		pair<string, string> p = v[i-1];
		cout << "Case #" << i << ": ";
        for (int j = 0; j < p.first.length(); j++){
			cout << p.first[j];
		}
		cout << " ";
		for (int j = 0; j < p.second.length(); j++){
			cout << p.second[j];
		}
		cout << endl;
	}
    
    return 0;
}
