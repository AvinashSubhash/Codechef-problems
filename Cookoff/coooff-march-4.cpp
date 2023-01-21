#include<iostream>
#define int1 long long int
using namespace std;

//working on it
int main()
{
   int1 num,n,m,k,sor;
   cin>>num;
   while(num--)
   {
       cin>>n>>m>>k;
       sor=0;
       for(int1 i=1;i<=n;i++)
       {
           for(int1 j=1;j<=m;j++)
           {
               if(i==0 && j==0)
               sor=k+i+j;
               sor = sor^(k+i+j);
           }
       }
       cout<<sor<<endl;
   } 
}