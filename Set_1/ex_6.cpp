#include <iostream>
#include <cstdlib>
using namespace std;

int newTone(int n) {
	int** S = new int* [n + 1];
	int i = 0;
	while (i <= n ){
		i++;
		S[i - 1] = new int [i];
	}
	**S = 1;
	if (n > 0) {
		**(S + 1) = 1;
		*(*(S + 1) + 1) = 1;
	}
	i = 2;
	while (i <= n) {
		int j = 1;
		*(*(S + i)) = 1;
		while (j < i) {
			*(*(S + i) + j) = *(*(S + i - 1) + j - 1) + *(*(S + i - 1) + j);
			j++;
		}
		*(*(S + i) + j) = 1;
		i++;
	}
	i = 0;
	while (i <= n) {
		int j = 0;
		while (j <= i) {
			cout << *(*(S + i) + j) << " ";
			j++;
		} 
		cout << endl;
		i++;
	}
	i = 0;
	while (i <= n) {
		delete [] S[i];
		i++;
	}
	delete [] S;
	return 0;
}

int main() {
	newTone(10);
	return 0;
}
