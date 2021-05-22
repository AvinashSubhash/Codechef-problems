#include <bits/stdc++.h>
#define int1 long long int
using namespace std; 

int main(){
    ios_base::sync_with_stdio(0); 
    int t; cin>>t; 
    while(t--){
        int1 n, m, k; cin>>n>>m>>k; 

        int ans = 0; 
        for(int1 i=1;i<=n;i++)
        {
            if (min(i,m)%2==1)
            ans^=k+i+1;
        }
        for(int1 i=2;i<=m;i++)
        {
            if (min(n,m-i+1)%2==1)
            ans^=k+n+i;
        }
        cout<<ans<<"\n"; 
    }
    return 0; 
}