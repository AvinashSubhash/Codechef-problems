#include<iostream>
#define int1 long long int
using namespace std;


// Under process

int eval(int1 *array,int1 l,int1 r)
{   int sum=0;
    for(int1 i=l-1;i<=r-1;i++)
    {
        if (array[i]==1)
        {
            for(int1 j=l-1;j<=r-1;j++)
            sum += array[j];
        }
        array[i] = 0;
    }
    return sum;
}


int main()
{
    int1 num,size,l,r,p;
    int data1[2],sum;
    cin >>num;
    while(num--)
    {
        sum=0;
        cin >> data1[0]>>data1[1];
        size=data1[0];
        int1 data[size],i=0;
        while(size--)
        {
            cin >> data[i];
            i++;
        }
        l=1;
        r=1;
        while(l < (data1[0]))
          {
            
            for(int1 j=1;j<=data1[0];j++)
            {
                if ((j-l)+1 == data1[1])
                {
                    r=j;
                    sum += eval(&data[0],l,r);
                }
            }
            l=r;
          }
        cout<<sum<<endl;

    }
}