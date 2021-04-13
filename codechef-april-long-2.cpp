#include<iostream>
#define int1 float
using namespace std;
int main()
{
    int1 num;
    cin >>num;
    while(num--)
    {
        int1 num1,val;
        float prod=1,time;
        cin >>num1;
        prod*=num1;
        cin>>num1;
        prod*=num1;
        cin>>num1;
        prod*=num1;
        cin>>val;
        prod*=val;
        
        time = 100/prod;
        
        time = (int)(time*100+.5);
        time = (float)time/100;
        
        if (time > 9.57)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}