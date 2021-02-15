//https://www.hackerrank.com/challenges/vector-sort/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,ele;
    vector<int>arr;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end());
    
    for(int i = 0 ; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
