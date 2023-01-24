#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    int1 n,m,result=0;
    cin>>n>>m;
    result=(n/2)*((m+1)/2) + (m/2)*((n+1)/2);
    int1 total = n*m;
    //cout<<result<<" "<<total<<endl;
    cout<<(result/__gcd(result,total))<<"/"<<(total/__gcd(result,total))<<endl;  
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