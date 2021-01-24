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

/*
#include <iostream>
using namespace std;

int main() 
{
    unsigned int L,R,T;
    cin>>T;
    while(T--)
    {
        cin>>L>>R;
        unsigned int count = 0;
        if(L == R)
            count = 1;
        else if(R>L)
        {
            unsigned int diff=R-L+1;
            count = diff + (((diff)*(diff-1))/2);
        }
        cout<<count<<"\n";
    }
	return 0;
}
*/
