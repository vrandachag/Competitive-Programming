//https://www.codechef.com/ALQN2021/problems/ALGOQ003
#include <iostream>
using namespace std;

int main() 
{
    int T,Z;
    cin>>T;
    while(T--)
    {
        cin>>Z;
        int X = 0;
        for(int i = 5 ; i>0; i--)
        {
            if(Z%i == 0)
            {
                X = X + (Z/i);
                break;
            }
            else if((Z%i) < i)
            {
                X = (Z/i) + 1;
                break;
            }
        }
        cout<<X<<"\n";
    }
	return 0;
}
