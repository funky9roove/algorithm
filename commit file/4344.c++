#include <iostream>
using namespace std;
int main()
{
	int c, i, n, j;
	int sum = 0;
	int score[1000];
	int pass = 0;
	double passrate;
	cin >> c;
	for (i = 0; i < c; i++) {
		cin >> n;
		for (j = 0; j < n; j++) {
			cin >> score[j];
			sum += score[j];
		}
		for (j = 0; j < n; j++) {
			if (score[j] > (sum / n)) pass++;
		}
		passrate = ((double)pass / n) * 100;
		cout << fixed;
		cout.precision(3);
		cout << passrate << "%" << endl;
		score[1000] = {false};
		sum = 0;
		n = 0;
		pass = 0;
		passrate = 0;
	}
	return 0;
}
