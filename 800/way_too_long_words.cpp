#include<iostream>
#include<string.h>

using namespace std;

#define endl '\n'

int main(){

	int n;
	string s;
	cin >> n;

	while(n--){
		cin >> s;

		if (s.length() <= 10) cout << s << endl;
		else cout << s[0] << s.length() - 2 << s.back() << endl;
	}

	return 0;

}
