#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	ios_base::sync_with_stdio(0);

	string berland, birland;

	cin >> berland >> birland;
	int flag = 1;
	for (int i = birland.length() - 1; i >= 0; i--)
		if (berland[birland.length() - i - 1] != birland[i]) flag = 0;

	cout << (flag ? "YES\n" : "NO\n");

	return 0;
}
