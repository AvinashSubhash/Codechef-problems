/*num = int(input())
for i in range(num):
    data1=[]
    sum1=0
    data = input().split(' ')
    data = [int(j) for j in data]
    for j in range(data[0]+1):
        data1.append([data[2],data[1]])
        #print(data1)
        for k in range(len(data1)-1):
            #print(data1[k])
            data1[k][1] -= 1
            if data1[k][1] == 0:
                data1.pop(k)
    for j in data1:
        sum1 += j[0]
    print(sum1)
*/     
#include<iostream>
using namespace std;

int main()
{
    int num,data[3];
    while(num--)
    {
        string s="";
        cin>>data[0]>>data[1]>>data[2];

    }
}
