#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int a,b;
        cin >> a >> b;
 
        a += 8;
        a /= 9;
        b += 8;
        b /= 9;
 
        cout << (a >= b) << " " << min(a,b) << endl;
    }
}