#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    int n,outp;
    cin>>n;
    string data[n];
    for (int i=0;i<n;i++)
        cin>>data[i];
    for (int i=0;i<n;i++)
        {
            outp = (data[i][i] - '0');
            cout<<!outp;
        }
    cout<<endl;
    cout<<(int)('0'-'0');
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