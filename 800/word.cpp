#include<iostream>
#include<string>

using namespace std;

int main(){

	string s; cin >> s;
	string a = "";
	string b = "";
	int dif = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] >= 'a' && s[i] <= 'z') dif++;
		else if (s[i] >= 'A' && s[i] <= 'Z') dif--;

		a += tolower(s[i]);
		b += toupper(s[i]);
	}

	cout << (dif >= 0 ? a : b) << endl; 



	return 0;
}
