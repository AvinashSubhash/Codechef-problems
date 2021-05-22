#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+45;
 
int n,k,a[N];
ll pf[N];
 
void solve(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pf[i] = pf[i-1]+a[i];
        cout<<"pf["<<i<<"]: "<<pf[i]<<"\n";
    }
 
    ll s = pf[n],m = n;
    for(int i = k; i <= n; i++)
    {  
        m = min(m,pf[i]-pf[i-k]);
        cout<<"m= min ("<<m<<","<<pf[i]-pf[i-k]<<")"<<endl;
    }
 
    ll sol = (m*(m+1))/2 + (s-m);
    cout << sol << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}