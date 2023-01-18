#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int a,b,x;
    cin >>a>>b>>x;
    if (b-a < 0)
    cout<<0<<endl;
    cout<<(b-a)/x<<endl;
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