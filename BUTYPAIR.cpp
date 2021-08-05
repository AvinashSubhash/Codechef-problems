#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solution()
{
    int num,count=0;
    cin>>num;
    int array1[num];
	vector<int> data1(1000001,0);
    for(int i=0;i<num;i++)
    {
	 cin>>array1[i];
	 data1[array1[i]]++;
    }
	for(int i=0;i<num;i++)
	count+=(num-data1[array1[i]]);
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}
