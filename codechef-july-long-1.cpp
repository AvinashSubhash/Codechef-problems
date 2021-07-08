#include<bits/stdc++.h>
#define int1 long long int
#define endl "\n"
using namespace std;

void solution()
{
    //Solving area
    int1 n,k,ans;
    cin >>n >> k;
      vector<int> a(n);
      for(int& i : a){
          cin >> i;
      }
      //31 because max bit could be 30th bit in an positive int
      vector<int> nSetBit(31); //number of elements with ith bit set
      int count;
      int term;
      for(int bit =0; bit<=30;bit++){
         
          count = 0;
          for(int& i : a){
              if(i%2!=0){
                  count ++;
                 
              }
             
              i/=2;
          }
         
          nSetBit[bit] = count;
      }
     
     
      ans = 0;
            for(int bit =0; bit<=30;bit++){
                if(nSetBit[bit]%k == 0){
                    ans += nSetBit[bit]/k;
                }
                else{
                    ans += nSetBit[bit]/k + 1;
                }
     
     
  }
 
  cout << ans << endl;
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
    int1 t;
        cin>>t;
    while(t--)
    {
        solution();
    }
}