#include <iostream>
#include <vector> 
#include <cmath>
using namespace std;

int main(){
	long long n, a, b;
	
	cin >> n >> a >> b;
	long long blues = 0;
	
	long long times = floor(n / (a + b));
	blues += a * times;
	
	long long remain = n % (a + b);
	if (remain >= a){
		blues += a;
	}
	else{
		blues += remain;
	}
	
	
	cout << blues;	
	
	
	return 0;
}
