#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n;
    cin>>n;
    int1 data[n],count=0;
    for(int1 i=0;i<n;i++)
    {
        cin>>data[i];
        if (data[i]%2==0)
        count++;
    }
    if (n==1 && count == 0)
    {
        cout<<"NOT READY"<<endl;
        return;
    }
    if (n%2==0 && count > n/2)
    cout<<"READY FOR BATTLE"<<endl;
    else if (n%2!=0 && count > n/2)
    cout<<"READY FOR BATTLE"<<endl;
    else
    cout<<"NOT READY"<<endl;
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
    int1 t=1;
    //cin>>t;
    while(t--)
    {
        solution();
    }
}