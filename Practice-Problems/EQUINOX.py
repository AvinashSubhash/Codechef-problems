check = ['E','Q','U','I','N','O','X']
num = int(input())
for i in range(num):
    sarth=0
    anu=0
    temp = input().split(" ")
    temp = [int(k) for k in temp]
    n = temp[0]
    a = temp[1]
    b = temp[2]
    for i in range(n):
        line = input()
        if line[0] in check:
            sarth += a
            #print("SARTHINCREASED"," ",line[0])
        else:
            anu += b
            #("ANUINCREASED"," ",line[0])
    if anu > sarth:
        print("ANURADHA")
    elif sarth > anu:
        print("SARTHAK")
    else:
        print("DRAW")

