#include <bits/stdc++.h>
using namespace std;


bool myfunc(int i, int j){return (i>j);}

int main(){
	int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	vector<int> p, q, r;
	for (int i = 0; i < a; i++){
		int temp;
		cin >> temp;
		p.push_back(temp);
	}
	for (int i = 0; i < b; i++){
		int temp;
		cin >> temp;
		q.push_back(temp);
	}
	for (int i = 0; i < c; i++){
		int temp;
		cin >> temp;
		r.push_back(temp);
	}
	sort(p.begin(), p.end(), myfunc);
	sort(q.begin(), q.end(), myfunc);
	sort(r.begin(), r.end(), myfunc);
	
	int result = 0;
	
	//
	while(x != 0 || y != 0){
		if (p.size() == 0){
			p.push_back(0);
		}
		if (q.size() == 0){
			q.push_back(0);
		}
		if (r.size() == 0){
			r.push_back(0);
		}
		if (x == 0){
			if (q[0] >= r[0]){
				result += q[0];
				q.erase(q.begin());
			}
			else {
				result += r[0];
				r.erase(r.begin());
			}
			y--;
			continue;
		}
		if (y == 0){
			if (p[0] >= r[0]){
				result += p[0];
				p.erase(p.begin());
			}
			else {
				result += r[0];
				r.erase(r.begin());
			}
			x--;
			continue;
		}
		
		if (p[0] > q[0]){
			if (p[0] >= r[0]){
				x--;
				result += p[0];
				p.erase(p.begin());
			}
			else if (q[0] >= r[0]){
				y--;
				result += q[0];
				q.erase(q.begin());
			}
			else{
				y--;
				result += r[0];
				r.erase(r.begin());
			}
		}
		else {
			if (q[0] >= r[0]){
				y--;
				result += q[0];
				q.erase(q.begin());
			}
			else if (p[0] >= r[0]){
				x--;
				result += p[0];
				p.erase(p.begin());
			}
			else{
				x--;
				result += r[0];
				r.erase(r.begin());
			}
			
		}
		
		//cout << x << " " << y << " " << p[0] << " " << q[0] << " " << r[0] << endl;
		
		
		
	}
	
	cout << result << endl;
	return 0;
}
