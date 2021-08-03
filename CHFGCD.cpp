#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
	int1 x,y;
	int count=0;
	cin>>x>>y;
	if (__gcd(x,y)>1)
	cout<<0<<endl;
	else{
		if (__gcd(x+1,y)>1 || __gcd(x,y+1) > 1){
			cout<<1<<endl;
		}
		else{
			cout<<2<<endl;}
	}
	return;
}
int main(){
    ios_base::sync_with_stdio(0);
    int1 t;
    cin>>t;
    while(t--){
        solution();}
}
