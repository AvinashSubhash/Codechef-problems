#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,x,k,sum1=0;
    cin >>n>>k>>x;
    int1 num[n];
    for(int i=0;i<n;i++)
    {cin >> num[i];sum1+=num[i];}
    sort(num,num+n);
    for(int1 i=0;i<2*k;i+=2)
    {
        if (num[n-1-i]+num[n-2-i] >= x)
        sum1 += x - (num[n-1-i]+num[n-2-i]);
    }
    cout<<sum1<<endl;   
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