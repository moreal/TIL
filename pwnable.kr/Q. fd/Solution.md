pwnable Question : fd  
======================
point : 1  
20170925 MON
  
Solution  
--------
이 문제는 파입 디스크립터에 대한 이해를 보는 문제이다.  
리눅스에서는 파일을 매우 중시한다.  
stdin, stdout, stderr 은 각각의 파일 디스크립터 정수 0, 1, 2를 가진다.  
  
함수 설명 :  
atoi : 문자열을 integer로 변환하여 반환해준다.  
  
코드 풀이  
---------
	cat fd.c  
	  
	코드를 보면
	argv[1]을 atoi 를 이용하여 정수형으로 변환후 - 0x1234를 하여 fd에 저장한다.  
	여기서 fd를 stdin으로 설정하기 위해 fd가 0이 되도록 유도 한다.  
	  
	./fd 4660  
	  
	0x1234를 십진수로 표현한 4660을 인자로 입력한다.  
	그 후에는 read를 통해 읽어 오게 되는데 fd를 0, stdin으로 유도 했으므로  
	입력 요구에 LETMEWIN\n 을 입력해준다.  
	그리고 cat flag가 실행되어 그 안의 내용이 출력된다.  
	  
	LETMEWIN\n 
	===========  
	jood job :) 메시지와 함께  
	mommy! I think I know what a file descriptor is!! 가 출력된다  


