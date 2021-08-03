n = int(input())
for i in range(n):
    num = int(input())
    res=1
    while num > 0:
        res *= num
        num -= 1
    count=0
    for i in range(len(str(res))):
        if len(str(res))-i-1 == '0':
            count += 1
        else:
            break
    print(count)