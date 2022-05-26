#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	int n; cin >> n;
	int flag = 1;
	while (flag){
		n++;
		int v[10] = {0};
		string s = to_string(n);
		int flag2 = 0;
		for (int i = 0; i < 4; i++){
			int aux = s[i] - 48;
			v[aux]++;
			if (v[aux] > 1) flag2 = 1;
		}
		
		if(!flag2) flag = 0;
		
	}

	cout << n << endl;

	return 0;
}

