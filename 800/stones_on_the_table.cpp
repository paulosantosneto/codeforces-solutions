#include<iostream>
#include<string>

using namespace std;

#define endl '\n'

int main(){

	int n; cin >> n;

	string s; cin >> s;
	int cont = 0;
	for (int i = 0; i < s.length(); i++){

		if (s[i+1] == s[i]) cont++;
	}

	cout << cont << endl;

	return 0;
}
