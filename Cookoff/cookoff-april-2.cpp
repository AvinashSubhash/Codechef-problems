#include<iostream>
#include<bits/stdc++.h>
#define int1 long long int
using namespace std;
int main()
{
    int1 t,n,x,i,count,flag,j;
    cin>>t;
    while(t--)
    {   count=1;
        cin>>n>>x;
        int1 arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
               if(arr[i]!=arr[i+1])
               count++; 
        }
        if ((n-count) < x)
        {
            cout<<(count-(x-(n-count)))<<"\n";
        }
        else
        cout<<count<<"\n";        
    }
}