#include <iostream>
using namespace std;
int main() 
{
	int a;
	int han = 0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i == 1000) break;	//1000이 넘으면 break
		else if (i < 100) han = i;	//100이하는 모두 한수
		else {	//100이상의 수 한수 측정
			int ad = 0;	//배열의 주소
			int arr[3];	//3자릿수를 분해하여 배열에 저장
			int tmp = i;
			while (tmp > 0) {
				arr[ad] = tmp % 10;
				tmp /= 10;
				ad++;
			}
			if (arr[0] - arr[1] == arr[1] - arr[2]) han++;	//한수 판별
		}
	}
	cout << han << endl;
	return 0;
}