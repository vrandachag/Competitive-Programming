#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q,x,y;
    set<int>s;
    cin>>Q;
    while(Q--)
    {
        cin>>x>>y;
        if(x == 1)
            s.insert(y);
        else if(x == 2)
            s.erase(y);
        else 
        {
            set<int>::iterator itr=s.find(y);
            if(itr == s.end())
                cout<<"No\n";
            else {
            cout<<"Yes\n";
            }
        }
        
    }
    return 0;
}
