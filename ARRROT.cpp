#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
#define M 1000000007
using namespace std;

int calculate(int1 *array1, int1 *n,int1 *shift,int1 *sum)
{
    *sum += *sum;
    *sum %=M;
    if (*sum < 0)
    *sum += M;
    return *sum;
}



void solution()
{
    //Solving area
    int1 n,q,num,sum=0;
    cin>>n;
    int1 array1[n];
    for(int1 i=0;i<n;i++)
    {
        cin>>array1[i];
        sum += array1[i];
    }
    sum %=M;
    if (sum<0)
    sum += M;
    cin>>q;
    for(int1 j=0;j<q;j++)
    {
        cin>>num;
        cout<<calculate(&array1[0],&n,&num,&sum)<<endl;
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    int1 t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solution();
    }
}