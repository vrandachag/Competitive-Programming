#include <iostream>
using namespace std;

int main() 
{
    int T,M,N;
    cin>>T;
    while(T--)
    {
        cin>>M>>N;
        if(M>N)
            cout<<M<<"\t"<<(N+M)<<"\n";
        else
            cout<<N<<"\t"<<(N+M)<<"\n";
    }
    return 0;
}
