#include<iostream>

using namespace std;

#define endl '\n'

int abs(int x, int y){

	return x > y ? x - y : y - x;
}

int main(){


	ios_base::sync_with_stdio(0);

	int m[6][6];
	int xi, yi;

	for (int i = 1; i <= 5; i++){

		for (int j = 1; j <= 5; j++){
			
			cin >> m[i][j];

			if (m[i][j]) xi = i, yi = j;
		}
	}

	cout << abs(xi - 3) + abs(yi - 3) << endl;

	return 0;
}
