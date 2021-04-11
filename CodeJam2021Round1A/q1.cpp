#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


#include<sstream>
template <typename T>
string to_string(T value){
    //create an output string stream
    std::ostringstream os ;

    //throw the value into the string stream
    os << value ;

    //convert the string stream into a string and return
	return os.str() ;
}

void solve(){
	int n;
	cin >> n;
	vi v(n);
	int res = 0;
	rep(i,0,n){
		cin >> v[i];
		
	}
	



}


int main(){
	int t;
	cin >> t;

	rep(i,1,t+1){
		cout << "Case #" << i << ": ";
		solve();
		cout << endl;
	}

	return 0;
}
