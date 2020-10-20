//https://www.codechef.com/problems/REPLESX
#include<algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int T,N,X,P,K,arr,count=0;
    vector<int>a;
    vector<int>:: iterator low,upper;
    cin>>T;
    while(T--)
    {
        count=0;
        cin>>N>>X>>P>>K;
        for(int i=0;i<N;i++)
        {
            cin>>arr;
            a.push_back(arr);
        }
	
		sort(a.begin(),a.end());
		low=lower_bound(a.begin(),a.end(),X);
		upper=upper_bound(a.begin(),a.end(),X);
	
	    if(a[P-1]==X)
	        cout<<0;
	        
        if(K>P)
		{
			if(a[P-1]>X)
			    cout<<P-upper;
			else
			
		}
		else
        {
                
        }
        cout<<"\n";
        a.clear();
    }
	return 0;
}
