#include <iostream>
using namespace std;
int main()
{
	int n, i;
	int max = 0;
	double sum = 0;
	cin >> n;
	double arr[1000];
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) {
		if (arr[i] > max) max = arr[i];
	}
	for (i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	double avg = sum / n;
	cout << avg;
	return 0;
}