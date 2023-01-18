#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()  
{
    int n,max1=0,max2=0,t;
    cin>>n;
    vector<int> ar_num;
    map<int,int> data;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        ar_num.push_back(t);
        data[t]++;
    }
    if (n==2 || n==1)
        {
            cout<<0<<endl;
            return;
        }
    for(auto element:data)
    {
        if (element.second > max2)
        max2 = element.second;
    }
    if (max2==1)
    cout<<n-2<<endl;
    else
    cout<<n - max2<<endl;
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