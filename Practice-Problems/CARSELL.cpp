#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,k,sum1=0;
    cin>>n;
    vector<int> data;
    for(int1 i=0;i<n;i++)
    {
        cin>>k;
        data.push_back(k);
    }
    sort(data.begin(),data.end(),greater<int>());
    k=0;
    for(int1 i=0;i<n;i++)
    {
        if (data[i]-k > 0)
        sum1+= (data[i]-k);
        k++;
    }
    sum1 %= 1000000007;
    cout<<sum1<<endl;

}

// for(auto x:array) cout<<x;
// vector<int> num(5,0); ==> [0,0,0,0,0]
// memset(data,-1,sizeof(data));
// sort(array1,array1+n);
// sort in descending order :-> sort(data.begin(),data.end(),greater<int>());
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