#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int max = 0, count = 0;
	int target;
	int arr[26] = { 0, };
	transform(s.begin(), s.end(), s.begin(), (int(*)(int))toupper);
	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < arr[i]) {
			max = arr[i];
			count = 0;
			target = i;
		}
		if (max == arr[i]) count++;
	}
	if (count > 1)
		cout << "?";
	else
		cout << (char)(target + 'A');
	return 0;
}