#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,x,k;
    cin >>n>>x>>k;
    if (x%k == 0 || ((n+1)-x)%k ==0)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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