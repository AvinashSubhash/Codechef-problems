#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 d,x,y,z;
    cin >>d>>x>>y>>z;
    if (x*7 > ((y*d)+z*(7-d)))
    cout<<x*7 <<endl;
    else
    cout<<(y*d)+z*(7-d)<<endl;
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