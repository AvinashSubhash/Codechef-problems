#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 D,d,a,b,c,price;
    cin >>D>>d>>a>>b>>c;
    if (d*D >= 10)
    {
        if (d*D >= 21)
        {
            if (d*D >=42)
            price=c;
            else
            price=b;
        }
        else
        price=a;

    }
    else
    price=0;
    cout<<price<<endl;

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