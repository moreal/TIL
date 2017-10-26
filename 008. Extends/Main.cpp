#include <iostream>

public class Person {
public:
	std::string name;
	int age;

	Person(std::string name, int age) : name(name), age(age){};
}

public class Student : public Person { // public > protected > private 에서 각각 상속의 접근 제어자로 볼때 각 멤버변수들의 최대 접근 범위를 해당 접근 제어자로 설정한다.
	std::string schoolname; // Member Initializer는 생성자보다 빨리 발동한다.

	Student(std::string schoolname, std::string name, int age) : Person(schoolname, name, age)
	{
		std::cout << "Created " << schoolname << name << age;
	};
}

int main()
{
	std::string name;
	int age;

	std::cin >> name >> age;

	return 0;
}
