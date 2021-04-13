
def check(data1,string1):
    eve=ord(string1[0])
    odd=ord(string1[1])
    """flag=1
    if data1[2]>data1[3]:
        flag=0
        for i in range(len(string1)):
            if (i%2==0) and ord(string1[i]) < eve:
                eve=ord(string1[i])
            elif (i%2!=0) and ord(string1[i]) < odd:
                odd=ord(string1[i])
    else:
        for i in range(len(string1)):
            if (i%2==0) and ord(string1[i]) > eve:
                eve=ord(string1[i])
            elif (i%2!=0) and ord(string1[i]) > odd:
                odd=ord(string1[i])
    if flag ==1:
        if (eve-odd) < k:
    """
    



n=input()
for i in range(n):
    data = input().split(' ')
    data=[int(j) for j in data]
    string = input()
    print(check(data,string))