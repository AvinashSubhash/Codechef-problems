#include<iostream>
using namespace std;

int main()
{
    int num,data[5];
    cin >>num;
    while(num--)
    {
        for(int i=0;i<5;i++)
        cin >> data[i];
        if (((data[1]-data[0]) >= (data[4]*data[2])) && ((data[1]-data[0]) <= (data[4]*data[3])))
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
}