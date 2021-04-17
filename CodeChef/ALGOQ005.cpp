//https://www.codechef.com/ALQN2021/problems/ALGOQ005
//incomplete
#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int sum = 0;
        string N;
        cin>>N;
        for(int i = 0 ; i < N.size() ; i++)
        {
            sum+=(N[i]-'0');
        }
        if(sum%3 == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
	return 0;
}
