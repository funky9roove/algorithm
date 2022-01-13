#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int diff = 10;
	int i, j;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		arr[i] %= 42;
	}
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				diff--;
				break;
			}
		}
	}
	cout << diff;
	return 0;
}