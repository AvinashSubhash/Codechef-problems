t = int(input())
for i in range(t):
    num = input()
    if num[0] == '1':
        print('1'+'0'+num[1:])
    else:
        print('1'+num)
