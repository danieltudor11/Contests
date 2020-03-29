#include <bits/stdc++.h>
using namespace std;


bool myfunc(long long i, long long j){return (i>j);}

int main(){
	int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	vector<long long> p(a), q(b), r(c);
	for (long long i = 0; i < a; i++){
		cin >> p[i];
	}
	for (long long i = 0; i < b; i++){
		cin >> q[i];
	}
	for (long long i = 0; i < c; i++){
		cin >> r[i];
	}
	sort(p.begin(), p.end(), myfunc);
	sort(q.begin(), q.end(), myfunc);

	for (long long i = 0; i < x; i++){
		r.push_back(p[i]);
	}
	for (long long i = 0; i < y; i++){
		r.push_back(q[i]);
	}
	
	sort(r.begin(), r.end(), myfunc);
	
	long long result = 0;

	for (long long i = 0; i < (x+y); i++){
		result += r[i];
	}
	
	cout << result << endl;
	return 0;
}
