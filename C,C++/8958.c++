#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int j, i, t, score = 0;
	char arr[80] = " ";
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> arr;
		char* ptr = strtok(arr, "X");
		while (ptr != NULL) {
			for (j = 0; j <= strlen(ptr); j++) {
				score += j;
			}
			ptr = strtok(NULL, "X");
		}
		cout << score << endl;
		score = 0;
	}
	return 0;
}