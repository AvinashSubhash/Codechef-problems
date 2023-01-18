# cook your dish here
num = int(input())
for i in range(num):
    dig = input()
    dig = list(dig)
    if '7' in dig:
        print("YES")
    else:
        print("NO")