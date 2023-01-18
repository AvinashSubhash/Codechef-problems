#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,k,count=0;
    cin >>n>>k;
    string str;
    cin>>str;
    for(int1 i=1;i<str.size();i++)
    {
        if (str[i]!=str[i-1])
        count++;
    }
    if (count >=k)
    {
        for(int1 i=n-1;i>=0;i--)
        {
            if (k%2==0 && str[i]==str[0])
            {
                cout<<i+1<<endl;
                break;
            }
            else if (k%2!=0 && str[i]!=str[0])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else
    cout<<-1<<endl;

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