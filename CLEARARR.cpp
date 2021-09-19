#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,x,k,sum1=0;
    cin >>n>>k>>x;
    int1 num[n];
    for(int i=0;i<n;i++)
    {cin >> num[i];sum1+=num[i];}
    sort(num,num+n);
    for(int1 i=0;i<2*k;i+=2)
    {
        if (num[n-1-i]+num[n-2-i] >= x)
        sum1 += x - (num[n-1-i]+num[n-2-i]);
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