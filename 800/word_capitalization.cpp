#include<iostream>
#include<string>

using namespace std;

#define endl '\n'

int main(){

	ios_base::sync_with_stdio(0);

	string s;

	cin >> s;

	if (s[0] >= 97) s[0] -= 32;

	cout << s << endl;

	return 0;
}
