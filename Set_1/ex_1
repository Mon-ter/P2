#include <iostream>
#include <cstdlib>
using namespace std;

int max(int* a, int n) {
	if (n == 0) {
		return -1;
	} else {
		int max = *a;
		int i = 1;
		while (i < n) {
			if (max < *(a + i)) {
				max = *(a + i);
			}
			i++;
		}
		return max;
	}
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
	cout << max(A, 10);
  delete [] A;
  return 0;
}
