//https://www.codechef.com/ALQN2021/problems/ALGOQ002
#include <iostream>
using namespace std;

int main() 
{
    int T,N,arr[1000];
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i = 0 ; i < N ; i++)
        {
            cin>>arr[i];
        }
        
        for(int i = 0 ; i < N ; i++)
        {
            if(i != 0)
                cout<<arr[i-1]<<"\t";
            else
                cout<<arr[N-1]<<"\t";
        }
    }
	return 0;
}
