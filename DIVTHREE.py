numb = int(input())
data = []
for i in range(numb):
    sum = 0
    temp1 = input().split(' ')
    temp1 = [int(p) for p in temp1]
    temp2 = input().split(' ')
    temp2 = [int(k) for k in temp2]
    for j in range(len(temp2)):
        sum += temp2[j]
    if sum/temp1[1] > temp1[2]:
        data.append(temp1[2])
    else:
        data.append(int(sum/temp1[1]))
for i in data:
    print(i)