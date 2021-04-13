num=int(input())
for i in range(num):
    data = input().split(' ')
    data=[int(j) for j in data]
    string = input().split('*'*data[1])
    if len(string) > 1:
        print("YES")
    else:
        print("NO")