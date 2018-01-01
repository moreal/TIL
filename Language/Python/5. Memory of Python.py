"""

동적할당 하여 그것을 레페런스로 연결을 해놓는 상태이다.

"""

# 레퍼런스의 예시
a = [[]] * 3
print(a)
a[0].append(4)
print(a)

#위의 상황 방지
b = [[] for i in range(3)]
b
b[0].append(4)
b[1].append(5)
b[2].append(6)

# 가비지 컬렉션: 메모리 관리 하는 프렌즈