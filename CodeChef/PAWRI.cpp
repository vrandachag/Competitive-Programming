#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
    int T;
    char ch[100000];
    cin>>T;
    while(T--)
    {
        cin>>ch;
        for(int i = 0 ; i < strlen(ch)-5 ; i++)
        {
            if(ch[i] == 'p' )
            {
                if(ch[i+1] == 'a')
                    if(ch[i+2] == 'r')
                        if(ch[i+3] == 't')
                            if(ch[i+4] == 'y')
                            {
                                i = i + 2;
                                ch[i] = 'w';
                                ch[i+1] = 'r';
                                ch[i+2] = 'i';
                                i = i + 2;
                            }
            }

        }
        cout<<ch<<"\n";
    }
	return 0;
}
