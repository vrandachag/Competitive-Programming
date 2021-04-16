//https://www.codechef.com/ALQN2021/problems/ALGOQ005
//incomplete
#include <iostream>
using namespace std;

int main() 
{
    int T,N;
    cin>>T;
    while(T--)
    {
        int flag = 0;
        cin>>N;
        for(int i = 3 ; i< N/2 ; i++)
        {
            if(i%2 != 0)
            {
                if(N%i == 0)
                {
                    flag = 1;
                    cout<<"YES\n";
                    break;
                }
            }
        }
        if(flag == 0)
            cout<<"NO\n";
        
    }
	return 0;
}
