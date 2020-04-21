#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n == 1){
		cout << "yes" << endl << "1 " << "1";
	}
	vector<int> v (n);
	int count = 0;
	for (int i = 0; i < n; i++){
		cin >> v[i];
		if (v[i] != i+1){
			count++;
		}
		if (v[i] < 1 || v[i] > n){
			cout << "no";
			return 0;
		}
	}
	if (!count){
		cout << "yes" << endl << "1 " << "1";
		return 0;
	}
	if (count == 1){
		cout << "no";
		return 0;
	}
	
	int start = 0, end;
	for (int i = 0; i < n; i++){
		
		if (v[i] == i+1){
			if (i == n-1){
				start = 1;
				end = 1;
				break;
			}
			continue;
		}
		start = i+1;
		int value = v[i];
		for (int j = i + 1; j < n; j++){
			if (v[j] == --value){
				if (j == n-1){
					end = n;
					break;
				}
				continue;
			}
			end = j;
			for (int k = j + 1; k < n; k++){
				if (v[k] == k+1){
					continue;
				}
				cout << "no";
				return 0;
			}
			break;
		}	
		break;
	}	
	cout << "yes" << endl;
	cout << start << " " << end;
	return 0;
}
