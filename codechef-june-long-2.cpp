#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 D,d,P,Q,num,sum;
    cin>>D>>d>>P>>Q;
    num = int(D/d);
    sum = (num*P)+(((num*(num-1))/2)*Q);
    sum *= d;
    if (D%d > 0)
    sum += (P+(Q*num))*(D%d);
    cout<<sum<<endl;
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