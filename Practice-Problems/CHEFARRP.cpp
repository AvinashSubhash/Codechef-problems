#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,sum1=0,prod=1,count;
    cin>>n;
    count=0;
    int1 data[n];
    for(int1 i=0;i<n;i++)
    cin>>data[i];
    for(int1 i=0;i<n;i++)
    {
        sum1=0;
        prod=1;
       for(int1 j=i;j>=0;j--)
       {
           sum1+=data[j];
           prod*=data[j];
       if (sum1==prod)
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