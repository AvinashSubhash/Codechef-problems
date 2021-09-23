#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,k,flag=0;
    cin>>n;
    map<int,int> data;
    for(int1 i=0;i<n;i++)
    {
        cin>>k;
        if(k==0)
        flag++;
        data[k]++;
    }
    if (flag > 0)
    {
        if (flag == n)
        cout<<0<<endl;
        else
        cout<<data.size()-1<<endl;
    }
    else
    cout<<data.size()<<endl;

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