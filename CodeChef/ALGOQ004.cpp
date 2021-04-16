//https://www.codechef.com/ALQN2021/problems/ALGOQ004
#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    int T, n,arr[40];
    cin>>T;
    while(T--)
    {
        vector<int>even,odd;
        cin>>n;
        for(int i = 0 ; i<n; i++)
        {
            cin>>arr[i];
            if(i%2 == 0)
            {
                if((arr[i]%2) != 0)
                    even.push_back(arr[i]);
            }
            else
            {
                if(arr[i]%2 == 0)
                    odd.push_back(arr[i]);
            }
        }
        
        if(even.size() == odd.size())
            cout<<even.size()<<"\n";
        else
            cout<<"-1\n";
    }
	return 0;
}
