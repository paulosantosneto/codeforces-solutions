#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	int n, h; cin >> n >> h;
	int x;
	int v[n];
	int ans = 0;
	for (int i = 0; i < n; i++){
		cin >> x;

		if (x > h) ans += 2;
		else ans++;
	}

	cout << ans << endl;

	return 0;
}
