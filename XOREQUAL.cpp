#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,count=0;
    cin >> n;
    for(int1 i=0;i<=pow(2,n)-1;i++)
    {
        //cout <<(i^(i+1)) << ":" <<((i+2)^(i+3))<<endl;
        if ((i^(i+1)) == ((i+2)^(i+3)))
        {
            count++;
            //cout<<"#"<<endl;
        }
            }
    cout<<count<<endl;
    
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