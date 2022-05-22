#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	int n, k; cin >> n >> k;
	int ans = 0;	
	int v[n+1];

	for(int i = 1; i <= n; i++) cin >> v[i];

	for(int i = 1; i <= n; i++){
		if(v[i] >= v[k] && v[i] > 0) ans++;
	}

	cout << ans << endl;

	return 0;

}
