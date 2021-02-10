//https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,c,d;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<"\n"<<a+b;
    c = b[0];
    for(int i = 1;i<a.size();i++)
    {
        c = c + a[i]; 
    }
    d = a[0];
    for(int i = 1;i<b.size();i++)
    {
        d = d + b[i];
    }
    cout<<"\n"<<c<<" "<<d;
    return 0;
}
