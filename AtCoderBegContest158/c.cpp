#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int tax8, tax10;
	cin >> tax8 >> tax10;


	int price1 = tax8 / 0.08;
	int price2 = tax10 / 0.1;

	if (price1 == price2){
		cout << price1;
		return 0
	}



	for (int i = 0; i < tax10 * 15; i++){
		int test1 = i * 0.08;
		int test2 = i * 0.1;
		if (test1 == tax8 && test2 == tax10){
			cout << i;
			return 0;
		}
	}

	cout << "-1";









	return 0;
}
