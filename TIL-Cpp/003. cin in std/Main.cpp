#include <iostream>

int main()
{
	/*
	 * 이번에는 std 네임스페이스 안의 cin에 대해 알아 보도록 하겠다.
	 * cin은 아마 console input이 아닐까..
	 *
	 * 1. cin >> a;
	 * 2. cin.get(a);
	 * 3. cin.getLine();
	 */

	/* 1. cin >> 이용 */
	/* 스페이스 바가 기준이 된다 / 엔터가 종결 문자이다 */

	int a;
	std::cin >> a;

	/* 2. cin.get() 이용 */
	/* 스페이스 바가 기준이 된다. / 엔터도 하나의 문자로 받아들인다. */

	int b;
	b = std::cin.get();

	/* 3. cin.getline() */
	/* NULL 혹은 엔터가 종결 문자가 된다. / cin.getline(char*, int, char) 형태로 구성되며 각각 입력 받은 배열, 읽을 길이, 종결 문자를 설정 가능하다. */

	char * buf = new char[10];
	std::cin.getline(buf, 10);

	/* 입력 : 10 a 10 */
	/* 출력 : "10" "32" "a 10" */

	std::cout << "Cin : " << a << std::endl;
	std::cout << "Cin.get : " << b << std::endl;
	std::cout << "Cin.getline : " << buf << std::endl;

	return 0;
}
