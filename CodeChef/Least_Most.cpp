#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() 
{
    int T,K;
    cin>>T;
    while(T--)
    {
        int ele;
            std::vector<int> arr ;

        cin>>K;
        for(int i = 0 ; i < K ; i++)
        {
            cin>>ele;
            arr.push_back(ele);
        }
        sort(arr.begin(),arr.end());
        
        cout<<(arr[0]*(K-1))<<"\n";
    }
	return 0;
}
