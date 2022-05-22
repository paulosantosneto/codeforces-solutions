#include<iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);

	int w;

	cin >> w;
	
	cout << (w == 2 || w % 2 != 0 ? "NO\n" : "YES\n");

	return 0;
}
