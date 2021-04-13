data1 = input().split(' ')
data1 = [int(i) for i in data1]
for i in range(data1[0]):
    price=0
    num = int(input())
    for j in range(num):
        data2 = input().split(' ')
        data2 = [int(k) for k in data2]
        if data2[0] > 21600:
            price += ((data2[1]-data2[0])*data1[1])
        elif data2[1] < 21600:
            pass
        else:
            price += ((data2[1]-data2[0])-(21600-data2[0]))*data1[1]
    print(price)