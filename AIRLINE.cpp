#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int weight[3],max_check,max_carr,sum_check=0,sum_carr=0;
    cin>>weight[0]>>weight[1]>>weight[2]>>max_check>>max_carr;
    if ((weight[1]+weight[2] <= max_check && weight[0] <= max_carr) || (weight[1]+weight[0] <= max_check && weight[2] <= max_carr) || (weight[0]+weight[2] <= max_check && weight[1] <= max_carr))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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