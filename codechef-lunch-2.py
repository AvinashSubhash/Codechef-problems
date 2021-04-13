def check(data1):
    sum=0
    for i in range(len(data1)):
        sum+=data1[i]
    print(sum)
    if sum%2 ==0:
        return True
    else:
        return False

def max1(val):
    temp = int((val/2))
    if temp > 0:
        return temp
    else:
        return 0

"""

num= int(input())
for i in range(num):
    evenodd=[0,0]
    count = 0
    n = int(input())
    data = input().split(' ')
    data = [int(j) for j in data]
    for j in range(len(data)):
        if data[j]%2 == 0:
            evenodd[0] += 1
        else:
            evenodd[1] += 1
    if evenodd[0] > evenodd[1]:
        for j in range(len(data)):
            if data[j]%2 != 0:
                data[j] = pow(data[j],max1(data[j]))
                count += 1
                print(count)
                if check(data):
                    print(count)
                    break
    else:
        for j in range(len(data)):
            if data[j]%2 == 0:
                data[j] = pow(data[j],max1(data[j]))
                count += 1
                print(count)
                if check(data):
                    print(count)
                    break
    if check(data) == False:
        print(-1)
"""      

num = int(input())
for i in range(num):
    n = input()
    temp = 0
    count=0
    data = input().split(' ')
    data=[int(j) for j in data]
    if check(data) == True:
        print(0)
        continue
    
    for j in range(len(data)):
        data[j] =pow(data[j],max1(data[j]))
        count+=1
        if check(data):
            print(count)
            break
     
    if check(data) == False:
        print(-1)

