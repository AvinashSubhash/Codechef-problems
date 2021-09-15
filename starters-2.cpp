#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int n;
    cin>>n;
    int data[n][n];
    memset(data,1,sizeof(data));
    if (n==2)
    {
        cout<<-1<<" "<<-1<<endl;
        cout<<-1<<" "<<-1<<endl;
    }
    else
    {
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (i==j)
                cout<<-1<<" ";
                else
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    
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