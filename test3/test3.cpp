// test2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int fibo(int a, int b)
{
	if (a > 100)
	{
		return 0;
	}

	int sum = a + b;

	cout << a << " ";

	fibo(b, sum);


}
int main() {

	int x = 0;
	int y = 1;

	fibo(x, y);

	return 0;
}