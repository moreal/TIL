//배열에 "Good morning!" 문자열을 저장한 후 0 ~ 13 사이의 정수 5개를 입력 받아 문자열에서 해당하는 위치의 문자를 차례로 출려가흔 프로그램을 작성해보자.
//혼종 탄생!! 
main()
{
	char str[] = "Good morning!";
	int want[5] = {0}; // 초기화 안 하면 위험할지도...?? 
	int i=0;
	
	for (; i<5; ++i)
		scanf("%d",&want[i]), (want[i] < 0 || want[i] > 13) ? want[i]=-1 : want[i];
		
	for (i=0; i<5; ++i)
		want[i]==-1 ? printf("IndexError ") : (putchar(str[want[i]]), putchar(' '));
}
