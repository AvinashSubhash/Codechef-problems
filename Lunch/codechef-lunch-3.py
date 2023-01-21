num=int(input())
for i in range(num):
    data = input().split(' ')
    data = [float(j) for j in data]
    if data[0] == data[1]:
        print("Yes")
        continue
    speed1 = ((data[0]*data[0])-(2*data[2]*data[3])) ** 0.5
    if speed1 <= data[2]:
        print("Yes")
    else:
        print("No")