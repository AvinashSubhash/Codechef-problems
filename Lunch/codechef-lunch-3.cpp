/*num=int(input())
for i in range(num):
    data = input().split(' ')
    data = [float(j) for j in data]
    if data[0] == data[1]:
        print("Yes")
        continue
    speed1 = ((data[0]*data[0])-(2*data[2]*data[3])) ** 0.5
    if speed1 <= data[2]:
        print("Yes")
    else:
        print("No")*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;
    cin>>num;
    while(num--)
    {
        float data[4];
        for(int j=0;j<4;j++)
        {
            cin>>data[j];
        }
        if (data[0] == data[1])
        {
            cout<<"Yes"<<endl;
            continue;
        }
        float speed1;
        speed1 = sqrt((data[0]*data[0])-(2*data[2]*data[3]));
        if (speed1<=data[1])
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

    }
}