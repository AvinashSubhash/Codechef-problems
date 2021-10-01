#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,k=0,s=0,i=0;
    cin>>n;
    if( n==0)
    {
        cout<<0<<endl;
        return;
    }
    while(n >= k)
    {
        //cout<<"((("<<i<<"|"<<i+1<<")|"<<1<<")|"<<i+3<<"):  "<<(((i|(i+1))|(i+2))|(i+3))<<endl;
        s=k;
        k = k|i;
        //cout<<k<<endl;
        i++;
    }
    cout<<s+1<<endl;
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