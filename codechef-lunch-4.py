num = int(input())
for i in range(num):
    data1=[]
    sum1=0
    data = input().split(' ')
    data = [int(j) for j in data]
    for j in range(data[0]+1):
        data1.append([data[1],j])
    for j in range(len(data1)-1):
        if data[0] - data1[j][1] >= data[1]:
            data1.pop(j)
    print(len(data1)*data[2])
        

