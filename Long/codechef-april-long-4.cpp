#include<iostream>
#define int1 long long int
using namespace std;

int main()
{
    int1 t,num,count;
    cin >> t;
    while(t--)
    {
        count=0;
        cin >> num;
        if (num >=4)
        {
            count += ((num/4)-1)*11*4;
            switch(num%4)
            {
                case 1: count += 76;
                break;
                case 2: count+= 88;
                break;
                case 3: count += 99;
                break;
                default: count += 60;
                break;
            }
        }
        else
        {
            switch(num%4)
            {
                case 1: count += 20;
                break;
                case 2: count+=36;
                break;
                case 3: count += 51;
                break;
                default: count += 0;
                break;
            }
        }
        cout<<count<<"\n";

    }
}