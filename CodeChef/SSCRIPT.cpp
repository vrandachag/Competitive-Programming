#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
    int T,N,K;
    string s1;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        cin>>s1;
        int count = 0,flag =0;
        for(int i = 0 ; i < s1.length() ; i++)
        {
            count = 0;
            while(s1[i] == '*' && count<K)
            {
                i++;
                count++;
            }
            if(count == K)
            {
                flag = 1;
                cout<<"YES\n";
                break;
            }
        }
        if(flag == 0)
            cout<<"NO\n";

    }
    return 0;
}
