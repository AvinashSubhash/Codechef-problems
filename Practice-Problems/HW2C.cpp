#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    pair <int,int> a[n];

    for(int i=0;i<n;++i)
        scanf("%d %d", &a[i].first, &a[i].second);

    sort(a,a+n); 
    int best = -1;
    for(int i=0;i<n;++i){
        if (a[i].second >= best){
            best = a[i].second;
        }
        else{
            best = a[i].first;
        }  
    }

    printf("%d", best);
}