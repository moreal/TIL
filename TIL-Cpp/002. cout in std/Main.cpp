#include <iostream>
#include <iomanip>

int main()
{
	/*
	 * std::cout 는 C++의 표준 입출력 헤더인 iostream의 std namespace 안에 있는 클래스이다.
	 * cout 은 console out, 콘솔 출력의 의미를 담고 있는 듯하다.
	 * 이 공부를 통해 cout에서 제공하는 형식 지정자등에 대해서 더 알아 보고자 한다.
	 */
	
	int a = 1;
	float b = 3.0;
	
	/* 1. 자동 형변환 */
	std::cout << "My grade is " << a << std::endl; // cout는 자동 형변환을 지원한다. 마치 자바에서 + 을 통한 String 으로의 변환이 떠오른다.

	/* 2. setf 를 통한 형식 지정 */
	/*
	 * 전달인자 ( ~ )
	 * std::ios::showbase	진법 접두어를 출력합니다.
	 * std::ios::showpos		양수 앞에 부호를 붙여 출력합니다.
	 * std::ios::showpoint	생략된 소수점과 이하의 0들을 모두 출력합니다.(기본 6자리)
	 * std::ios::uppercase	16진수나 과학적 E 표에서의 영어 표기를 대문자로 합니다.
	 * 
	 * 전달인자 (~ , ~)
	 * std::ios::dec					10진법
	 * std::ios::hex		ios::basefield		16진법
	 * std::ios::oct					8진법
	 *
	 * std::ios::fixed		ios::floatfield		고정 소수점 출력
	 * std::ios::scientific				과학적 E 표기 (지수 표기법)
	 *
	 * std::ios::left					왼쪽 정렬
	 * std::ios::right		ios::adjustfield	오른쪽 정렬
	 * std::ios::internal				부호나 진법은 왼쪽, 값은 오른쪽 정렬
	 *
	 */

	std::cout.setf(std::ios::showpoint); // std::cout 에서 제공하는 setf 메소드이다. set format을 지칭하는 것 같다.
	std::cout << "Float Test : " << b << std::endl; // b는 3.0를 의미한다. 본래 소수점은 생략 될수도 있으나 생략하지 말것을 지정한다.

	std::cout.setf(std::ios::showpos);
	std::cout << "Int Test : " << a << std::endl;

	std::cout.unsetf(std::ios::showpoint); // 해제시에는 unsetf로해제를 해줍니다.
	std::cout.unsetf(std::ios::showpos); // 코드가 굉장히 길어짐을 느낀다. using namespace std; 를 하면 std를 입력하지 않아도 사용할 수 있다.OB
	
	std::cout << std::ios::basefield << " " << std::ios::oct << " " << std::ios::dec << " " << 20 << std::endl; // 호기심에 출력을 해본 결과 각각의 enum 값을 지니고 있는 듯하다.

	/* 3. 조정자를 통한 형식 지정 */
	/* WARNING 이 것을 진행하기 위해서는 iomanip 헤더를 필요로 합니다. */
	
	std::cout << "Hex : " << std::hex << 20 << std::endl;
	std::cout << "Dec : " << std::dec << 20 << std::endl;
	std::cout << "Oct : " << std::oct << 20 << std::endl;
	
	std::cout << std::dec << std::showpos << std::showpoint << "Int Test : " << 20.0 << std::noshowpos << std::noshowpos << std::endl;

	std::cout << std::setfill('Q'); // 여백을 Q 문자로 채우겠다는 의미이다.
	std::cout << std::setw(10) << "H" << std::endl; // 아마도 QQQQQQQQQH 로 출력되리라
	// 그리고 다른 것들은 한번 설정 해주면 유지되지만 setw의 경우 일회성으로써 매번 다시 설정해줘야 한다.%06d에 가까은 것이랄까.OA
}
	
