#include<iostream>
using namespace std;
int main()
{
    int t,arr[7];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<7;i++)
            cin >> arr[i];
        if (arr[4]>=arr[0] && arr[5] >= arr[1] && arr[6]>=arr[2])
        {
            if ((arr[4]+arr[5]+arr[6]) >=arr[3])
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
        else
        cout<<"No\n";
    }
}