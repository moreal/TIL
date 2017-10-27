# SQL Injection Note

## % 을 이용한 우회
%의 경우 뒤에 hex코드가 오게 하여 그것을 다른 문자로 치환하여 사용할 수 있게 해준다.
하지만 

## SQL의 주석

    1. -- (하이폰 두개 뒤에는 공백이 존재해야 한다.) (MS SQL, Oracle,POSTGRESQL 단일주석)
    2. /**/ (주석 안 일지라도 따옴표, 쌍따옴표는 닫아줘야 한다.)
    3. # (MySQL 단일주석) // url에 적용시킬 때 #은 
    (Maria DB 는 모두 허용)

## SQL Query 의 끝

    ; 을 이용해서 한 쿼리의 끝을 알 

## SQL 에서 시스템 명령 실행

    명령 실행 : xp_cmdshell { 'command_string' } [ , no_output ]

    여러가지 정보 추출 - MySQL command
    SELECT @@version
    SELECT user();
    SELECT system_user();
    SELECT user, password FROM mysql.user;
    SELECT @@datadir;
    SELECT @@hostname;

