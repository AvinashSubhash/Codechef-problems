#include <iostream>
#define int1 long long int
using namespace std;

int main() {
	int1 num,i;
    int bin;
    cin >>num;
    while(num--)
    {
        i=1;
        while((i*i) <= 1000000)
        {
            cout<<i*i<<endl;
            cin>>bin;
            if (bin == 1)
            break;
            i++;
        }
        
    }
	return 0;
}
