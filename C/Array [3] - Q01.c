//배열에 문자열 "Hong Gil Dong"으로 초기화 한후 인덱스 3번부터 6번까지의 문자를 차례로 출력하는 프로그램을 작성해 보자!!!

main() 
{
	char str[] = "Hong Gil Dong";
	int i = 3;
	for(; i<7; ++i) putchar(str[i]);
}
