num=int(input())
for i in range(num):
    grt=[0,0]
    data1 = input().split(' ')
    for j in range(int(data1[0])):
        data2=input().split(' ')
        if int(data2[0]) <= int(data1[1]):
            if int(data2[1]) > int(grt[1]):
                grt = data2
    print(int(grt[1]))