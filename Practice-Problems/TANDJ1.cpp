#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    if ((abs(c-a)+abs(d-b)) <= k && (k-((abs(c-a)+abs(d-b))))%2 == 0 )
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
