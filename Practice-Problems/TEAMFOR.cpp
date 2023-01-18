#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    int n,up=0,down=0,full=0,t;
    cin >> n;
    string data[2];
    for (int i=0;i<2;i++)
        cin>>data[i];
    for (int i=0;i<n;i++)
    {
        if (data[0][i] == '1' && data[1][i] == '1')
            full++;
        else
        {
            up += data[0][i]-'0';
            down += data[1][i]-'0';
        }
    }
    t = n-(min(up,down)*2)-full;
    int ans = min(up, down);
	if (full >= t) {
		ans += (full + t) / 2;
	} else {
		ans += full;
	}
    cout<<ans<<endl;
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