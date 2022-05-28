#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	int x; cin >> x;
	int ans = 0;
	if (x / 5 > 0){
		ans += x / 5;
		x %= 5;
	}
	if (x / 4 > 0){
		ans += x / 4;
		x %= 4;
	}
	if (x / 3 > 0){
		ans += x / 3;
		x %= 3;
	}
	if (x / 2 > 0){
		ans += x / 2;
		x %= 2;
	}

	cout << ans + x << endl;

	return 0;
}
