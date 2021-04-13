#include<iostream>
#define int1 long long int
using namespace std;

int main()
{
    int1 num;
    for(int k=1;k<200000;k++)
    {int sum=0;
    for(int1 i=1;i<k;i++)
    {
        sum += (i&(i-1));
    }
    cout<<sum%(1000000007)<<endl;
}}