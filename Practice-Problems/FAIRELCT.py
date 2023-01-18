def sums(array):
    sums = 0
    for i in array:
        sums += i
    return sums
def calculate(data1,data2):
    data1 = sorted(data1)
    data2 = sorted(data2,reverse=True)
    count = 0
    while sums(data1) < sums(data2):
        if len(data1) - count <= 0 or len(data2) - count <= 0:
            return count
        else:
            temp = data1[count]
            data1[count] = data2[-count]
            data2[-count] = temp
            count += 1
    if count == 0:
        return -1
    return count
num = int(input())
result = []
for i in range(num):
    data_sizes = input().split(' ')
    data_sizes = [int(i) for i in data_sizes]
    data1 = input().split(' ')
    data1 = [int(i) for i in data1]
    data2 = input().split(' ')
    data2 = [int(i) for i in data2]
    result.append(calculate(data1,data2))
for i in result:
    print(i)