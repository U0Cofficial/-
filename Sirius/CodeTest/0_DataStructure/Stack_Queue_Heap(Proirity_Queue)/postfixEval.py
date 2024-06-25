from listStack import ListStack

def evaluate(st:str)->int:
    stack=ListStack()
    prev_is_digit=False #bool type 변수 활용하기

    for ch in st:
        if ch.isdigit():    # 다양한 함수 적재적으로 활용하기
            if prev_is_digit:
                tmp=stack.pop()
                stack.push(tmp*10+int(ch))


            else:
                stack.push(int(ch))
                prev_is_digit=True

        elif isOperator(ch):
            stack.push(operation(stack.pop(),stack.pop(),ch))   # 인자로 함수return 값을 전달하기
            prev_is_digit=False
        
        else:
            prev_is_digit=False

    return stack.pop()

def isOperator(ch:str)->bool:       # 한 라인 이상의 statements는 함수를 만들어 사용하기
    return ch=='+' or ch=='-' or ch=='*' or ch == '/'   # bool return 에 연산을 넣어 간단하게 코딩하기

def operation(o1:int,o2:int,ch:str)->int:
    return {'+':o1+o2,'-':o1-o2,'*':o1*o2,'/':o1//o2}[ch]       # dictionary 자료형을 활용하기 - 굳이 변수를 만들지 말고 dict를 인자들을 활용해 raw하게 다루기

# def main():
#     postfix="700 3 47 + 6 * - 4 /"
#     print(f"input string: {postfix} ")
#     answer=evaluate(postfix)
#     print(f"Answer:{answer}")

# if __name__ == "__main__":
#     main()