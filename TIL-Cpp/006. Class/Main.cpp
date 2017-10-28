#include <iostream>

int main()
{
	/*
	 * 이번에는 클래스에 대해서 알아보도록 하겠다.
	 * Class는 하나의 구조체 같은 느낌이였다. 구조체에 접근 지정자와 메소드를 더하여 하나의 객체처럼 행동하는 것이다.
	 *
	 * 클래스 하나를 선언하고 간단한 상속을 해보겠다.
	 */

	class A{ // 임시로 사용할 클래스 A를 선언하였다.
	public:
		A(int key)
		{
			this->key = key;
		}
		
		int getKey()
		{
			return this->key;
		}

	private:
		int key;
	};

	int temp;
	
	std::cout << "Input the Key : ";
	std::cin >> temp;

	A a = A(temp); // Temp에 원하는 키값을 받아 A 클래스를 생성자를 통해 클래스내의 key 값을 초기화 해주었다.
	
	std::cout << "The key is " << a.getKey(); // 게터세터로 받아와 출력해주었다.

	return 0;
}
