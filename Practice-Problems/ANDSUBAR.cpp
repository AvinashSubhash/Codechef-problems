#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,power,power2,a,b;
    cin>>n;
    power = (int)log2(n);
    power2=power-1;
    b = n-pow(2,power);
    if (power2 > 0)
        {
            a = pow(2,power)-pow(2,power2);
            if (a > b)
            cout<<a<<endl;
            else
            cout<<b+1<<endl;
        }
        else
        cout<<b+1<<endl;
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