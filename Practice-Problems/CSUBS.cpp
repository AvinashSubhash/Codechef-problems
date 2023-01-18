#include <bits/stdc++.h>
using namespace std;

int minChange(int arr[], int n, int k)
{
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        map<int, int> mp;
        int count = 0;
        for (int j = i; j < n; j += k)
        {
            mp[arr[j]]++;
            count = max(count, mp[arr[j]]);
        }
        ans += count;
    }
    return n - ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << minChange(arr, n, k)<<endl;
    }
    return 0;
}