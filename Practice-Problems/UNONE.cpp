#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n;
    cin >> n;
    vector<int1> num_(n,0); 
    vector<int1> even;
    vector<int1> odd;
    for (int1 i=0;i<n;i++)
    {
        cin>>num_[i];
        if (num_[i] & 1)
        odd.push_back(i);
        else
        even.push_back(i);
    }
    for(int1 i=0;i<even.size();i++)
        cout<<num_[even[i]]<<" ";
    for(int1 i=0;i<odd.size();i++)
        cout<<num_[odd[i]]<<" ";
}

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