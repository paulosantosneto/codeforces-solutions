#include<iostream>
#include<string>

using namespace std;

#define endl '\n'

int main(){

	string a, b;

	cin >> a >> b;
	
	int i;

	for (i = 0; i < a.length(); i++){
		if (tolower(a[i]) < tolower(b[i])){
			cout << -1 << endl;
			break;
		}
		else if (tolower(a[i]) > tolower(b[i])){
			cout << 1 << endl;
			break;
		}
	}
	
	if(i == a.length()) cout << 0 << endl;

	return 0;
}
