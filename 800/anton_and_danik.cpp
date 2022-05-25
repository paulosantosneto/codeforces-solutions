#include<iostream>

using namespace std;

#define endl '\n'

int main(){

	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	int a = 0;
	string s; cin >> s;

	for (int i = 0; i < s.length(); i++) s[i] == 'A' ? a++ : a--;
	
	cout << (a == 0 ? "Friendship\n" : (a > 0 ? "Anton\n" : "Danik\n"));

	return 0;
}
