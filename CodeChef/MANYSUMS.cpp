#include <iostream>
using namespace std;

int main() 
{
    int L,R,T;
    cin>>T;
    while(T--)
    {
        cin>>L>>R;
        int temp = L,count = 0;
        if(L== R)
            count = 1;
        else
        {
            while(L<=R)
            {
                temp = L;
                while(temp<=R)
                {
                    count++;
                    temp++;
                }
                L++;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}
