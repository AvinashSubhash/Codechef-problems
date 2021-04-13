num = int(input())
for i in range(num):
    str1=''
    data = input()
    data2 = data.split('party')
    if len(data2) == len(data):
        print(data)
    else:
        for i in data2:
            str1 += i
            str1 += 'pawri'
        str1 = str1[:-5]
    print(str1)
