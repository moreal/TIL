//�迭�� "Good morning!" ���ڿ��� ������ �� 0 ~ 13 ������ ���� 5���� �Է� �޾� ���ڿ����� �ش��ϴ� ��ġ�� ���ڸ� ���ʷ� ������� ���α׷��� �ۼ��غ���.
//ȥ�� ź��!! 
main()
{
	char str[] = "Good morning!";
	int want[5] = {0}; // �ʱ�ȭ �� �ϸ� ����������...?? 
	int i=0;
	
	for (; i<5; ++i)
		scanf("%d",&want[i]), (want[i] < 0 || want[i] > 13) ? want[i]=-1 : want[i];
		
	for (i=0; i<5; ++i)
		want[i]==-1 ? printf("IndexError ") : (putchar(str[want[i]]), putchar(' '));
}
