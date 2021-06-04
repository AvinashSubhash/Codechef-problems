#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 xa,xb,XA,XB;
    cin >> xa>>xb>>XA>>XB;
    cout<<ceil(XA/xa)+ceil(XB/xb)<<endl;
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