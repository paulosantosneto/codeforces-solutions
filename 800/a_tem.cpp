#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	int n; cin >> n;
	int ans = 0;
	while(n--){ 
		int sum = 0, x;
		for(int i = 0; i < 3; i++){
			cin >> x;
			sum += x;
		}

		if(sum >= 2) ans++;
	}

	cout << ans << endl;

	return 0;
}
	
