#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
    int T;
    char ch[100000];
    char check[6] = "party";
    cin>>T;
    while(T--)
    {
        cin>>ch;
        for(int i = 0 ; i < strlen(ch) ; i++)
        {
            if(ch[i] == 'p')
            {
                int k = i+1,j = 1;
                while(k < strlen(ch) && j<strlen(check))
                {
                    if(ch[k] == check[j])
                    {
                        k++;
                        j++;
                    }
                    else
                        break;
                }
                if(j == strlen(check))
                {
                    i = i + 2;
                    ch[i] = 'w';
                    ch[i+1] = 'r';
                    ch[i+2] = 'i';
                    i = i + 2;
                } 
                else
                    i = i + j - 1;

            }
        }
        cout<<ch<<"\n";
    }
	return 0;
}
