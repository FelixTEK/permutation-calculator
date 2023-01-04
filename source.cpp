#include <iostream>
using namespace std;

int factorial(int n) {
	int result = n;
	if (n == 0) {
		result = 1;
	}
	else {
	
		for (n > 0; n = n - 1;){
			result = result*n;
		}
	}
	return result;
}

int main() {
	int n,r;
	char select;
	cout << "Welcome to the Permutation and Combination Calculator.\n";
	cout << "n:";
	cin >> n;
	cout << "r:";
	cin >> r;
	cout << "Is this Permutation or Combination? (P/C):";
	cin >> select;
	if (select == 'P' or select == 'p'){
		int nPr = factorial(n)/factorial(n-r);
		cout << nPr;
	}
	else if (select == 'C' or select == 'c'){
		int nCr = factorial(n)/(factorial(n-r)*factorial(r));
		cout << nCr;
	return 0;		
	}
}


