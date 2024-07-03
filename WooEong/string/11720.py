# def sum_of_digits(n, number_string):
#     total = 0
#     for char in number_string:
#         total += int(char)  # 각 문자를 숫자로 변환하여 더하기
#     return total

# # 입력 받기
# n = int(input("숫자의 개수를 입력하세요: "))  # 첫 번째 줄 입력
# number_string = input("숫자열을 입력하세요 (공백 없이): ")  # 두 번째 줄 입력

# # 결과 계산 및 출력
# result = sum_of_digits(n, number_string)
# print(f"숫자의 합: {result}")



import sys
input = sys.stdin.readline

def sum_numbers(numbers):
    result = 0
    for char in (numbers.strip()):
        result += int(char)
        
    return result

n = int(input())
numbers = input()

print(sum_numbers(numbers))


#for char in (numbers): 각 문자를 숫자로 변환하여 합을 구함


# import sys
# input = sys.stdin.readline

# n = input()
# number_string = input()



# cnt = 0
# for i in number_string:
#     if i == '\n': break
#     cnt += int(i)

# print(cnt)
