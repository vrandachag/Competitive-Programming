//https://www.codechef.com/START22C/problems/ELECTIONS
#include <iostream>
using namespace std;

int main() {
    int T,xa,xb, xc;
    cin>>T;
    while(T--)
    {
        cin>>xa>>xb>>xc;
        if((xa > 50 && xb > 50 && xc > 50) || (xa > 50 && xb > 50) || (xb > 50 && xc > 50) || (xa > 50 && xc > 50))
            cout<<"NOTA"<<endl;
        else if(xa>50)
            cout<<"A"<<endl;
        else if(xb>50)
            cout<<"B"<<endl;
        else if(xc>50)
            cout<<"C"<<endl;
        else
            cout<<"NOTA"<<endl;

    }
	// your code goes here
	return 0;
}
