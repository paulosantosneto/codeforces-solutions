#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	ios_base::sync_with_stdio(0);

	int a, b; cin >> a >> b;
	int ans = 0;
	while(a <= b){
		ans++;
		a *= 3;
		b *= 2;
	}

	cout << ans << endl;

	return 0;
}


