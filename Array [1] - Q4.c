#include <stdio.h>

// �� �Է°��� 0 �̸� ����. ������ ���� �Է� ����.
 
int main()
{
	char Daze[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int InputYear, InputMonth;
	
	printf("YEAR : "); scanf("%d", &InputYear);
	printf("Month : "); scanf("%d", &InputMonth);
	
	if (!InputMonth || InputMonth < 1 || InputMonth > 12) return 0;
	
	printf("�Է��Ͻ� ���� �� ���� %d�� �Դϴ�.", Daze[InputMonth-1] + (!(InputYear % 4) && (InputYear % 100) || !(InputYear%400)));
}
