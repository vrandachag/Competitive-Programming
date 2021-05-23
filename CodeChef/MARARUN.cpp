#include <iostream>
using namespace std;

int main() 
{
    int T,A,B,C,D,d,product;
    cin>>T;
    while(T--)
    {
        cin>>D>>d>>A>>B>>C;
        product = D*d;
        if(product>=10 && product<21)
            cout<<A<<"\n";
        else if(product>=21 && product <42)
            cout<<B<<"\n";
        else if(product>=42)
            cout<<C<<"\n";
        else
            cout<<"0\n";
    }
	return 0;
}
