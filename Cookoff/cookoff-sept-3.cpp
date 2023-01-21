#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,num1;
    cin>>n;
    vector<int> even,odd;
    for(int1 i=0;i<n;i++)
    {
        cin >> num1;
        if (num1%2==0)
        even.push_back(num1);
        else
        odd.push_back(num1);
    }
    if (odd.size() == 0 || even.size() == 0)
    {
        cout<<-1<<endl;
        return ;
    } 
    else
    {
            for(int1 i=0;i<even.size();i++)
            cout<<even[i]<<" ";
            for(int1 i=0;i<odd.size();i++)
            cout<<odd[i]<<" ";
    }
    cout<<endl;
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