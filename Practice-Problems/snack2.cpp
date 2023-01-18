#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int c1=0,c0=0,c2=0,t;
    for(int i=0;i<5;i++)
    {
        cin>>t;
        if (t==1)
        c1++;
        else if(t==2)
        c2++;
        else
        c0++;
    }
    if (c1 > c2)
    cout<<"INDIA"<<endl;
    else if (c2 > c1)
    cout<<"ENGLAND"<<endl;
    else
    cout<<"DRAW"<<endl;
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