#include<iostream>

using namespace std;

#define endl '\n'

int cost(int k, int w){

	return ((k*w*w) + (k*w)) / 2;
}

int main(){

	int k, n, w;

	cin >> k >> n >> w;

	cout << (n - cost(k, w) < 0 ? cost(k, w) - n : 0) << endl;

	return 0;
}
