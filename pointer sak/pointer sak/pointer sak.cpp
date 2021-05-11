#include<iostream>
using namespace std;

int main() {

	const int size = 5;
	int a[size];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int b[size];

	int* a1 = a;
	int* b1 = b;
	for (int i = 0; i < size; i++)
	{
		*(b1 + i) = *(a1 + i);
		cout << *(b1 + i) << " ";

	}
}