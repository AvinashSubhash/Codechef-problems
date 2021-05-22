#include<iostream>
using namespace std;


int calculate(int *array, int size)
{
    int check[size],flag=0,cond=1;
    for(int i=0;i<size;i++)
        check[i] = i+1;
    while (cond)
    {
        int min=array[0],index=0,flag1=0;
        for(int i=0;i<size;i++)
        {
            if (array[i] <= min)
            {
                min = array[i];
                index = i;
            }
        }
        array[index] += 1;
        for(int i=1;i<=size;i++)
        {
            if (array[index] <= i)
                flag1=1;
        }
        if (flag == 0)
                flag=1;
            else
                flag=0;
        if (flag1 == 0)
            return flag;
    }
}



int main()
{
    int loop_size, in_size;
    cin>>loop_size;
    int ans[loop_size];
    for(int i=0;i<loop_size;i++)
    {
        cin>>in_size;
        int array1[in_size];
        for(int j=0;j<in_size;j++)
        {
            cin>>array1[j];
        }

        ans[i] = calculate(&array1[0],in_size);
    }
    for (int i=0;i<loop_size;i++)
    {
        if (ans[i] == 0)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
}