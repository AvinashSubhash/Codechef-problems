def solute(init,k):
    #data = input().split()
    #init = int(data[0])
    number = list(str(init))
    k = str(k)
    p=0
    if k not in number:
        return 0
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
        #print("modified: ",num)
        num += pow(10,len(number)-p-1)
        return num - init


def raw(init,k):
    if str(k) not in list(str(init)):
        return 0
    else:
        p = init
        while str(k) in list(str(init)):
            init += 1
        return init-p

'''print(solute(21,5),raw(21,5))
print(solute(8,8),raw(8,8))
print(solute(100,0),raw(100,0))
print(solute(5925,9),raw(5925,9))
print(solute(434356,3),raw(434356,3))
'''

for a in range(1,1000000000):
    for b in range(0,10):
        if (raw(a,b)!=solute(a,b)):
            print(a," ",b," results: ",raw(a,b)," ",solute(a,b))
