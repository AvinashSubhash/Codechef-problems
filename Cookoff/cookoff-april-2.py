num=int(input())
for i in range(num):
    data=input().split(' ')
    data = [int(j) for j in data]
    data1=input().split(' ')
    data1 = [int(j) for j in data1]
    data2 = list(set(data1))
    if (len(data1)-len(data2)) < data[1]:
        print(len(data2)-(data[1]-(len(data1)-len(data2))))
    elif (len(data1)-len(data2)) >= data[1]:
        print(len(data2))