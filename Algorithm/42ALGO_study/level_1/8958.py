a = int(input())
for i in range(a):
    str = input()
    O = 0
    score = 0
    for j in list(str):
        if j == 'O':
            O += 1
            score += O
        elif j == 'X':
            O = 0
    print(score)
