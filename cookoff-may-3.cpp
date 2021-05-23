#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

int value(int1 v1, int1 v2)
{
    int1 num=0;
    for(int1 i=0;i<v1;i++)
    {
        num += (i+1);
    }
    for(int1 i=0;i<v2-1;i++)
    {
        num += v1;
        v1 += 1;
    }
    return num;
}

void solution()
{
    //Solving area
    int1 x1,y1,x2,y2,val=0;
    cin >>x1>>y1>>x2>>y2;
    for(int1 i=x1;i<x2;i++)
        val += value(i,y1);
    for(int1 i=y1;i<=y2;i++)
        val += value(x2,i);
    cout<<val<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    int1 t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}