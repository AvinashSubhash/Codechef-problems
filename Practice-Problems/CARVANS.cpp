#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,count=1;
    cin>>n;
    int1 data[n];
    for(int1 i=n-1;i>=0;i--)
    cin>>data[i];
    if (n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(int1 i=n-2;i>=0;i--)
    {
        if (data[i] > data[i+1])
        {
            data[i] = data[i+1];
        }
        else
        {
            count++;
        }
    }
    cout<<count<<endl;
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