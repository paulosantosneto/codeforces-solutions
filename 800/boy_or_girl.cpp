#include<iostream>
#include<string>

using namespace std;

int main(){


	string s; cin >> s;

	int v[200] = {0};
	int ans = 0;

	for (int i = 0; i < s.length(); i++){
		v[s[i]]++;

		if (v[s[i]] == 1) ans++;
	}

	cout << (ans % 2 == 0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");

	return 0;
}
