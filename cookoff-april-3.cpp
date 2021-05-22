#include<iostream>
#define int1 long long int
using namespace std;
int main()
{
    int1 t,i,x,grt,n,r;
    cin>>t;
    while(t--)
    {
        grt=0;
        cin>>n>>r;
        int1 arra[n],arrb[n];
        for(i=0;i<n;i++)
        cin>>arra[i];
        for(i=0;i<n;i++)
        cin>>arrb[i];
        x=0;
        for(i=0;i<n;i++)
        {
            if (i==0)
            x += arrb[0];

            else
            {
                x += arrb[i] - ((arra[i]-arra[i-1])*r);
                if (x<0)
                x=0;
            }
            if (x > grt)
            grt=x;
        }
        cout<<grt<<"\n";
    }
}