data_one = input().split(' ')
data_one = [int(i) for i in data_one]
data_shift = input().split(' ')
data_shift = sorted([int(i) for i in data_shift])

if data_shift[0]+data_one[2] >= data_one[1]:
    print("YES")
elif data_shift[-1] + data_one[2] >= data_one[1]:
    print("YES")
else:
    print("NO") 