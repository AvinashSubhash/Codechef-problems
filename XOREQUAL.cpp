#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,count=0;
    cin >> n;
    if (n==1)
    {
        cout<<1<<endl;
        return;
    }
    int1 res = pow(2,n-1);
    cout<<res%(100000000+7)<<endl;
    //cout<<count<<endl;
    
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