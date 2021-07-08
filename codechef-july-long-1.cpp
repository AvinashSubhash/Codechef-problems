#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,k,count,result=0;
    cin >>n>>k;
    vector<int> numbers(n);
    vector<int> bits(31);
    for(int i=0;i<n;i++)
        cin>>numbers[i];
    for(int i=0;i<31;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(numbers[j]%2!=0)
                count++;  
            numbers[j]/=2;
        }
        bits[i]=count;
    }
    for(int i=0;i<31;i++)
    {
        if (bits[i]%k==0)
        result+= bits[i]/k;
        else
        result+= bits[i]/k + 1;
    }
    cout<<result<<endl;
    
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