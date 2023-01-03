#include <iostream>
//#include <math.h>
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
	int n,r,nPr;
	cout << "Welcome to the Permutation Calculator.\n";
	cout << "n:";
	cin >> n;
	cout << "r:";
	cin >> r;
	nPr = factorial(n)/factorial(n-r);
	cout << nPr;
	return 0;		
}

