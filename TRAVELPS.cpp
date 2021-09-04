#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int a,b,n,sum1=0;
    cin >>n>>a>>b;
    string str;
    cin>>str;
    for (int i=0;i<n;i++)
    {
        switch(str[i])
        {
            case '0': sum1 += a;
            break;
            case '1': sum1 += b;
            break;
            default: break;
        }
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