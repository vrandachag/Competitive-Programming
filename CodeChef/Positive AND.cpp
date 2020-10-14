//https://www.codechef.com/OCT20A/problems/POSAND/
#include<iostream>
using namespace std;

int main() 
{
    unsigned int T,N,;
    cin>>T;
    while(T--)
    {
        cin>>N;
        if(N==1)
            cout<<1<<"\n";
        else if(N&N-1 == 0)
            cout<<-1<<"\n";
        else
        {
            for(int i=2;i<N;i++)
            {
                cout<<i<<"\t"<<i-1;
            }
        }
    }
	return 0;
}
