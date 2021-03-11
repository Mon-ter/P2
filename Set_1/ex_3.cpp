#include <iostream>
#include <cstdlib>
using namespace std;

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

int cyclicSwap(int* a, int n, int m) {
	m = m % n;
	if (m < 0) {
		m += n;
	}
	int* b = new int [m];
	int i = 0;
	while (i < m) {
		*(b + i) = *(a + i);
		i++; 
	}
	i = 0;
	while (i + m < n) {
		*(a + i) = *(a + i + m);
		i++;
	}
	i = 0;
	int help = n - m;
	while (i < m) {
		*(a + help + i) = *(b + i);
		i++;
	}
	delete [] b;
}

int main() {
	int* a;
	create(&a, 10);
	display(a, 10);
	cyclicSwap(a, 10, 1);
	display(a, 10);
	cyclicSwap(a, 10, -1);
	display(a, 10);
  delete [] a;
	return 0;
}
