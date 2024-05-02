#include <iostream>
using namespace std;
bool arr[10001]; //bool함수 선언
int d(int n) {  //d(n) 함수
	int sum = n;
	while (1) {
		if (n == 0) break;
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	for (int i = 0; i < 10001; i++) {
		int noselfnum = d(i); 
		if (i <= 10001) arr[noselfnum] = true;    //셀프넘버가 아닌 수를 true로
	}
	for (int i = 0; i < 10001; i++) {
		if (arr[i] == false) cout << i << endl; //셀프넘버인 false만 1부터 차레대로 출력
	}
	return 0;
}