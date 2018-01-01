#-*-coding:utf8-*-

# help(함수명): 하면은 도움말
# dir() : 내용물들

# 방어적 프로그래밍 : 버그를 막자!!

# 하나의 함수에는 하나의 기능만을 : Refactoring, 모듈화

def input_num(prompt):
    while True:
        line = input(prompt)
        try:
            return int(line)
        except ValueError:
            print("제발 수를 입력하세요")

input_num("hello!")