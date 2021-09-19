#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,k,odd=0,eve=0;
    vector<int> veve,vodd;
    cin>>n>>k;
    string chr;
    cin >>chr;
    for(int1 i=0;i<n;i++)
    {
        if (chr[i] == '0')
        {eve++;veve.push_back(i+1);}
        else
        {odd++;vodd.push_back(i+1);}
    }
    if (k==1)
    {
        if (chr[0] == '1')
            {   if( eve == 0)
                cout<<-1<<endl;
                else
                cout<<veve[eve-1]<<endl;}
        else
        {       if( odd == 0)
                cout<<-1<<endl;
                else
                cout<<vodd[odd-1]<<endl;}
    }
    else 
    if (chr[0] == '1')
    {
        if (k%2==0)
           { if (veve.size() < k/2 || vodd.size() < ((k/2)+1))
            {cout<<-1;return;}
            else {
                cout<<vodd[odd-1]<<endl;
            }
           }
        else
        {
            if (veve.size() < ((k/2)+1) || vodd.size() < ((k/2)+1))
            {cout<<-1;return;}
            else
            cout<<veve[eve-1]<<endl;
        }

    }
    else
    {
        if (k%2==0)
           { if (vodd.size() < k/2 || veve.size() < ((k/2)+1))
            {cout<<-1;return;}
            else {
                cout<<veve[eve-1]<<endl;
            }
           }
        else
        {
            if (veve.size() < ((k/2)+1) || vodd.size() < ((k/2)+1))
            {cout<<-1;return;}
            else
            cout<<vodd[odd-1]<<endl;
        }
    }
    
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