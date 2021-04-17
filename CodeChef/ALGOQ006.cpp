//https://www.codechef.com/ALQN2021/problems/ALGOQ006
#include <iostream>
using namespace std;

int main() 
{
    int T,A,B;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        cout<<(A xor B)<<"\n";
    }
	return 0;
}
