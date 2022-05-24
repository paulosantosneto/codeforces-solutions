#include<iostream>
#include<string>

using namespace std;

#define endl '\n'

int main(){

	ios_base::sync_with_stdio(0);

	string s;

	cin >> s;

	int one = 0, two = 0, three = 0;

	for (int i = 0; i < s.length(); i += 2){
		if (s[i] == '1') one++;
		if (s[i] == '2') two++;
		if (s[i] == '3') three++;
	}
	string ans = "";

	for (int i = 0; i < one; i++) ans += "1+";
	for (int i = 0; i < two; i++) ans += "2+";
	for (int i = 0; i < three; i++) ans += "3+";

	ans.pop_back();

	cout << ans << endl;

	return 0;
}
