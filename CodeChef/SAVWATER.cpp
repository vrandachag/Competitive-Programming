//https://www.codechef.com/SPYB21C/problems/SAVWATER
#include <iostream>
using namespace std;

int main() 
{
    int T,H,x,y,C;
    cin>>T;
    while(T--)
    {
        cin>>H>>x>>y>>C;
        int water = x + (y/2);
        water = water * H;
        if(water <= C )
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
	return 0;
}
