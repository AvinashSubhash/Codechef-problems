def decoder(rang,data):
    final_data = []
    str1 = ''
    for i in range(0, len(data), rang):
        final_data.append(data[i:i+rang])
    for i in final_data:
        range1 = [97,112]
        for k in i:
            if int(k) == 0:
                range1[1] = int((range1[0]+range1[1])/2)
                key = int((range1[0]+range1[1])/2) 
            else:
                range1[0] = int((range1[0]+range1[1])/2)
                key = int((range1[0]+range1[1])/2) 
        #print(chr(key)) 
        str1 += chr(key)
    return str1    

num = int(input())
char = []
for i in range(num):
    range1 = int(input())
    data = input()
    char.append(decoder(range1,data))
for i in char:
    print(i)