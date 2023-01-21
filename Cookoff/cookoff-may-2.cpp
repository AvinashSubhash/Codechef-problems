#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 g,p,arr[10],count=0,count1,count2,temp;
    cin >>g>>p;
    for(int1 i=0;i<10;i++)
    cin>>arr[i];
    for (int1 i =g;i<10;i++)
    count+=arr[i];
    count1 = count/p;
    count2 = count%p;
    if ((count2+arr[g-1])<=p)
        cout<<count1+1<<" "<<count1+1<<endl;
    else
    {
       if ((count2 ==0 && arr[g-1] <= p) || ((arr[g-1]+count2)%p ==0) )
       temp = 0;
       else
       temp = (((count2+arr[g-1])%p)/p)+1;

       cout<<count1+1<<" "<<count1+(((count2+arr[g-1])/p))+temp<<endl;
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