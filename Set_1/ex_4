#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int merge(int* a, int sa, int* b, int sb, int* c, int sc) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < sa && j < sb) {
		int ta = *(a + i);
		int tb = *(b + j);
		if (ta <= tb) {
			*(c + k) = ta;
			k++;
			i++;
		} else {
			*(c + k) = tb;
			k++;
			j++;
		}
	}
	while (i < sa) {
		*(c + k) = *(a + i);
		i++;
		k++;
	}
	while (j < sb) {
		*(c + k) = *(b + j);
		j++;
		k++;
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
	create(&b, 10);
	sort(a, a + 10);
	sort(b, b + 10);
	create(&c, 20);
	display(a, 10);
	display(b, 10);
	merge(a, 10, b, 10, c, 20);
	display(c, 20);
	delete [] a;
	delete [] b;
	delete [] c;
	return 0;
}
