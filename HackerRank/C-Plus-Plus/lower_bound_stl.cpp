#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int X,Q,val,ele,i;
    vector<int>arr;
    cin>>X;
    for(i = 0 ; i < X ; i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    cin>>Q;
    while(Q--)
    {
        cin>>val;
        std::vector<int>::iterator low,up;
        low=std::lower_bound (arr.begin(), arr.end(), val);
        if(arr[low-arr.begin()] == val)
            cout<<"Yes "<<low-arr.begin()+1<<"\n";
        else {
        up = upper_bound(arr.begin(),arr.end(),val);
        cout<<"No "<<(up-arr.begin()+1)<<"\n";
        }            
            
    }
    return 0;
}
