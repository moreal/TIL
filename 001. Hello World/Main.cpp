#include <iostream>

int main()
{
	/*
	 *  std::cout 에서 std는 네임 스페이스, cout는 클래스이다. 
	 *  std::cout << "Hello World"로 출력을 할대에 있어 << 는 연산자 오버로딩을 통해서 출력할 문자들을 cout의 인자로 넣어주는 역할을 한다. 
	 *  std::endl 은 line의 end 라는 의미를 담고 있는 듯 하다. 보다 쉬운 가독성을 제공하는 듯하다. 
	 *
	 *  Hello World를 출력했으니 다음은 cin 과 cout에 대해 더 자세히 알아보도록 하겠다. 
	 */
	 
	std::cout << "Hello World" << std::endl;
	
	return 0;
}
