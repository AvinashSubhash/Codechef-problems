#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,x,y;
    map<int,int> p_i,p_j;
    cin>>n;
    for(int1 i=0;i<((4*n)-1);i++)
    {
        cin>>x>>y;
        p_i[x]++;
        p_j[y]++;
    }
    for(map<int,int>::iterator i= p_i.begin();i!=p_i.end();++i)
    {
        if (i->second%2!=0)
        x=i->first;
    }
    for(map<int,int>::iterator i= p_j.begin();i!=p_j.end();++i)
    {
        if (i->second%2!=0)
        y=i->first;
    }
    cout<<x<<" "<<y<<endl;
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