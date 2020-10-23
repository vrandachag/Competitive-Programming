//https://www.codechef.com/problems/REPLESX
#include<algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    long long int T,N,X,P,K,arr;
    vector<long long int>:: iterator low,upper;
    cin>>T;
    while(T--)
    {
        cin>>N>>X>>P>>K;
         vector<long long int>a;
        for(int i=0;i<N;i++)
        {
            cin>>arr;
            a.push_back(arr);
        }
        
		sort(a.begin(),a.end());
		
	    if(a[P-1]==X)
	        cout<<0;
        else if(K>=P && (a[P-1]>X))
		{
		    upper=upper_bound(a.begin(),a.end(),X);
		    cout<<(P-(upper-a.begin()));
		}
		else if(K<=P && (a[P-1]<X))
		{
		    low=lower_bound(a.begin(),a.end(),X);
		    cout<<(low-a.begin())-P+1;
		}
        else
            cout<<"-1";
        cout<<"\n";
    }
	return 0;
}
