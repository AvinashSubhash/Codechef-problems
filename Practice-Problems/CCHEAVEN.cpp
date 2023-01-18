#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 l,count=0;
    cin>>l;
    string string1;
    cin>>string1;
    for(int1 i=0;i<l;i++)
    {
        if (string1[i] == '1')
        count++;
        if (count >= float(i+1)/2)
        {
            cout<<"YES"<<endl;
            break;
        }
        if (i==(l-1))
        cout<<"NO"<<endl;
    }

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