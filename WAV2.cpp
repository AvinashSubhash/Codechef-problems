#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,q,k;
    cin>>n>>q;
    int1 num[n];
    for(int i=0;i<n;i++)
    cin>>num[i];
    sort(num,num+n);
    bool start = (n&1)?0:1;
    while(q--)
    {
        cin >>k;
        auto num1 = lower_bound(num,num+n,k) - num;
        if (num[num1] == k)
            cout<<0<<endl;
        else
        {
            if (start)
            {
                if (num1 & 1)
                cout<<"NEGATIVE"<<endl;
                else
                cout<<"POSITIVE"<<endl;
            }
            else
            {
                if (num1 & 1)
                cout<<"POSITIVE"<<endl;
                else
                cout<<"NEGATIVE"<<endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int1 t=1;
    while(t--)
    {
        solution();
    }
}