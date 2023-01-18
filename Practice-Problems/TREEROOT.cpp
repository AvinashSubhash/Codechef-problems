#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int num,n1,n2,sum=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin >> n1 >> n2;
        sum += n1 - n2;
    }
    cout<<sum<<endl;


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