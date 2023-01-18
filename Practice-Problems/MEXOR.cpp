#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,output=0;
    cin>>n;
    /*
    for(int x=0;x<n;x++)
    {
        output=0;
        for(int1 i=0;i<x;i++)
        output = output | i;
        cout<<output<<endl;
    }*/
    if (n==0 || n==1)
    {
        cout<<n+1<<endl;
        return;
    }
    else if (n==2)
    {
        cout<<2<<endl;
        return;
    }
    int pex=0;
    while (true)
    {
        if (2*pex+1 > n)
        break;
        pex = 2*pex+1;
    }
    cout<<pex+1<<endl;    
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