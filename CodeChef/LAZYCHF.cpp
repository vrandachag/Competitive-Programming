#include <iostream>
using namespace std;

int main()
{
    int T,m,x,d;
    cin>>T;
    while(T--)
    {
        cin>>x>>m>>d;
        int p = x*m;
        int s = x + d;
        if(p<s)
            cout<<p<<"\n";
        else
            cout<<s<<"\n";
    }
    return 0;
}
