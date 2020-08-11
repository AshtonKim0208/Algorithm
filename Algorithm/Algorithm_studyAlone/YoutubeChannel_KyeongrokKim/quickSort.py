# split() 함수를 사용하여 공백문자를 기준으로 문자를 나누어주고 이 나눈 값은 리스트에 하나씩 들어가게 된다.
# map(func,x) 함수는 리스트 같은 x의 각 요소에 func을 적용시켜 주는 함수이다.
nums = list(map(int, input().split()))

def mySort(arr):
    if len(arr) < 2:
        return arr
    else:
        pivot = arr[0]
        less = [n for n in arr[1:] if n <= pivot]
        greater = [n for n in arr[1:] if n > pivot]
        return mySort(less) + [pivot] + mySort(greater)

result = mySort(nums)
print(result)