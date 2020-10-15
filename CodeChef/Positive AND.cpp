//https://www.codechef.com/OCT20A/problems/POSAND/
#include<iostream>
using namespace std;

int main() 
{
    long int N,count=1;
    int T;
    cin>>T;
    while(T--)
    {
        count=1;
        cin>>N;
        if(N==1)
            cout<<"1";
        else if((N&N-1) == 0)
            cout<<"-1";
        else
        {
            cout<<2<<" "<<3<<" "<<1<<" ";
            for(int i=5;i<=N;)
            {
                if(count==1)
                {    
                    cout<<i<<" "<<i-1<<" ";
                    i=i+2;
                    count=0;
                }
                else
                {
                    cout<<i-1<<" "<<i<<" ";
                    i=i+2;
                    count=1;
                }
            }
             if(N%2==0)
                cout<<N;
        }
        cout<<"\n";
    }
	return 0;
}
