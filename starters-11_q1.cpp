#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,s,sum1=0,p,flag=0;
    cin>>n>>s;
    sum1 = (n*(n+1))/2;
    p=sum1-s;
    if (p > 0 && p <=n)
    cout<<p<<endl;
    else
    cout<<-1<<endl;

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