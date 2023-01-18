#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 a,b;
    cin>>a>>b;
    if (a>0 && b>0)
    cout<<"Solution"<<endl;
    else if(b==0)
    cout<<"Solid"<<endl;
    else if(a==0)
    cout<<"Liquid"<<endl;
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