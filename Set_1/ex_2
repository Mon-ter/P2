#include <iostream>
#include <cstdlib>
using namespace std;

int reverse(int* a, int n) {
	int i = 0;
	int j = n - 1;
	while (j > i) {
		*(a + i) = *(a + i) ^ *(a + j);
		*(a + j) = *(a + i) ^ *(a + j);
		*(a + i) = *(a + i) ^ *(a + j);
		i++;
		j--;
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
	int* A;
	create(&A, 10);
	display(A, 10);
	reverse(A, 10);
	display(A, 10);
  delete [] A;
 }
