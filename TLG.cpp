#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 num1,i=0,t1,t2;
    int1 max1[] = {0,0};
    cin>>num1;
    int1 arr[num1][2];
    while(num1--)
    {
        if (i==0)
        {
            cin>>arr[i][0]>>arr[i][1];
            cout<<arr[i][0] - arr[i][1]<<endl;
            if (arr[i][0] > arr[i][1])
            {
                max1[0]=1;
                max1[1]=arr[i][0] - arr[i][1];
            }
            else
            {
                max1[0]=2;
                max1[1]=arr[i][1] - arr[i][0];
            }
            i++;
        }
        else
        {
            cin>>t1>>t2;
            arr[i][0] = arr[i-1][0]+t1;
            //cout<<arr[i][0]<<endl;
            arr[i][1] = arr[i-1][1]+t2;
            //cout<<arr[i][1]<<endl;
            //cout<<arr[i][0] - arr[i][1]<<endl;
            if (arr[i][0]>arr[i][1])
            {
                if (arr[i][0]-arr[i][1] > max1[1])
                {
                    max1[0]=1;
                    max1[1]=arr[i][0] - arr[i][1];
                }
            }
            else
            {
                if (arr[i][1]-arr[i][0] > max1[1])
                {
                    max1[0]=2;
                    max1[1]=arr[i][1] - arr[i][0];
                }
            }
            i++;
        }
    }
    cout<<max1[0]<<" "<<max1[1];
}

// for(auto x:array) cout<<x;
// vector<int> num(5,0); ==> [0,0,0,0,0]
// memset(data,-1,sizeof(data));
// sort(array1,array1+n);

//debug time
// begin=clock(); end=clock(); cout<<(double)(end-begin)/CLOCKS_PER_SEC;
int main()
{
    ios_base::sync_with_stdio(0);
    int1 t=1;
    //cin>>t;
    while(t--)
    {
        solution();
    }
}