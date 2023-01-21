loop = int(input())
ls=[]
for i in range(loop):
    data = input()
    data = data.split("0")
    count=0
    for j in data:
        if len(j) >= 1:
            count += 1
    ls.append(count)
for i in ls:
    print(i)