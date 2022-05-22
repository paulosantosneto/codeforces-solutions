#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	int n; cin >> n;
	string op;
	int ans = 0;
	for (int i = 0; i < n; i++){

		cin >> op;

		if(op[0] == '+' || op[1] == '+' || op[2] == '+') ans++;
		else ans--;
	}

	cout << ans << endl;

	return 0;
}
