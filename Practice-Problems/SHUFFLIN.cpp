#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,odd=0,even=0,k,sum1=0;
    cin>>n;
    for(int1 i=0;i<n;i++)
    {
        cin>>k;
        if (k&1)
        odd++;
        else
        even++;
    }
    if (n&1)
    {
        if (odd >= (n/2))
            {
                sum1+=(n/2);
                sum1+=even;
            }
        else
        {
            sum1 += odd;
            sum1 += (n/2)+1;
        }
    }
    else
    {
        if (odd >= (n/2))
            {
                sum1+=(n/2);
                sum1+=even;
            }
        else
        {
            sum1 += odd;
            sum1 += (n/2);
        }
    }
    cout<<sum1<<endl;
}

// for(auto x:array) cout<<x;
// vector<int> num(5,0); ==> [0,0,0,0,0]
// memset(data,-1,sizeof(data));
// sort(array1,array1+n);
// map<int,int> data; data[t]++;
//debug time
// begin=clock(); end=clock(); cout<<(double)(end-begin)/CLOCKS_PER_SEC;
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