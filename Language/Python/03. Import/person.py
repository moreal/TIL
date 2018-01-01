class person(object):
    def __init__(self, name): # 생성자 초기화 과정 코딩
        self.name = name

    def __str__(self): # 자바의 toString 같이 str() 호출시 사용됨
        return