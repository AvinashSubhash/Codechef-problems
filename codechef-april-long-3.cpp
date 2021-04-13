#include<iostream>
#include<string>
#define int1 long long int
using namespace std;
int main()
{
    int1 num,size,k,count;
    string string1;
    cin >>num;
    while(num--)
    {
        count=0;
        cin >> size>>k;
        cin >> string1;
        for(int1 i=0;i<size;i++)
        {
            if (string1[i]!= '*')
            {
                if (count == k)
                {
                    cout<<"YES\n";
                    break;
                }
                else
                count=0;
            }
            else if(string1[i] == '*')
            {
                count++;
                if (count == k)
                {
                    cout<<"YES\n";
                    break;
                }
            }
            
            //cout<<"Count: "<<count<<endl;
        }
        if (count < k)
        cout << "NO\n";
        
    }
}