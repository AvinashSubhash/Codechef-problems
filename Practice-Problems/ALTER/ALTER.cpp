#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    int1 a,b,p,q;
    cin>>a>>b>>p>>q;
    if(p%a!=0 || q%b!=0)
    cout<<"NO"<<endl;
    else if(p/a==q/b || p/a==(q/b)+1 || p/a==(q/b)-1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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