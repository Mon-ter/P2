#include <iostream>
#include <cstdlib>
using namespace std;

int toZero(int* a, int n) {
	int i = 0;
	while (i < n) {
		*(a + i++) = 0;
	}
	return 0;
}

int mult(int* a, int na, int* b, int nb, int* c) {
	int nc = na + nb - 1;
	int i = 0;
	while (i < na) {
		int j = 0;
		while (j < nb) {
			*(c + j + i) += *(a + i) * *(b + j);
			j++;
		}
		i++;
	}
	return 0;
}

int create(int** a, int n) {
	*a = new int [n];
	int i = 0;
	while (i < n) {
		*(*a + i) = rand() % 11;
		i++;
	}
	return 0;
}

int display(int* a, int n) {
	int i = 0;
	while (i < n) {
		cout << *(a + i) << " ";
		i++;
	}
	cout << endl;
	return 0;
}

int main() {
	int* a;
	int* b;
	int* c;
	create(&a, 10);
	if (*(a + 9) == 0) {
		*(a + 9) = 1;
	}
	create(&b, 20);
	if (*(b + 19) == 0) {
		*(b + 19) = 1;
	}
	create(&c, 29);
	toZero(c, 29);
	display(c, 29);
	display(a, 10);
	display(b, 20);
	mult(a, 10, b, 20, c);
	display(c, 29);
	return 0;
 }

