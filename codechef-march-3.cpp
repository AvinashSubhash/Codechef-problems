#include<iostream>
#include<math.h>
#include<ctime>
#include<cmath>
#define int1 long long int
using namespace std;

int main()
{
  

    int1 loop;
    int1 num;
    cin>>loop;
    
  
    for (int1 loop_s=0;loop_s<loop;loop_s++)
    {  
        int1 max_val=0;
        //const clock_t begin_time = clock();

        cin>>num;
        const clock_t begin_time = clock();
        int1 d = int(log2(num))+1;
        cout << float( clock () - begin_time )<<"\n";
       
        int1 num2 = pow(2,d);
        
        for (int1 i=0;i<num2;i++)
        {
            for (int1 j=i+1;j<num2;j++)
            {
                 
                if (num == (i ^ j))
                {
                    if (max_val == 0)
                    max_val = i*j;
                    else if  (i*j > max_val)
                    max_val = i*j;
                }
               
                
            }
        }
        
 
        cout<<max_val<<"\n";
         //cout << float( clock () - begin_time )<<"\n"; 
    }
    /*for (int1 i=0;i<loop;i++)
    {
        cout<<sol[i]<<"\n";
    }*/
    
}