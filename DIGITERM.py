t = int(input())
for i in range(0,t):
    data = input().split()
    init = int(data[0])
    number = list(str(data[0]))
    k = str(data[1])
    p=0
    if k not in number:
        print(0)
    else:
        flag=0
        for j in range(len(number)):
            if flag==0:
                if number[j]==k:
                    p=j
                    flag=1
            else:
                if k=='0':
                    number[j] = '1'
                else:
                    number[j] = '0'
        num=''
        for x in range(len(number)):
            num = num+number[x]
        num = int(num)
        print("modified: ",num)
        num += pow(10,len(number)-p-1)
        print(num - init)
    

