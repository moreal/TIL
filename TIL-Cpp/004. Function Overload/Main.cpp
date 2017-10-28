#include <iostream>

int main()
{
	/*
	 * 함수 오버로딩에 대해서 알아보도록하겠다.
	 * 함수 오버로딩이란 같은 이름의 함수가 있을 때 만약 인자의 자료형과 갯수가 다를 경우 다른 함수로 인식을 한다.
	 * 다만 사용시에 이상한 함수가 호출 될 수도 있고 여러 혼동이 있을 수 있으므로 주의하는 게 좋겠다.
	 */

	f(1);
	f(1, 2);

	return 0;
}

void f(int a)
{
	std::cout << "f(int a) : " << a << std::endl;
}

void f(int a, int b)
{
	std::cout << "f(int a, int b) : " << a << " " << b << std::endl;
}
