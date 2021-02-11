//
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
    vector<int> arr;
    char ch;
    int a,ch1;
    stringstream s(str);
    while(s>>a>>ch)
    {   
        arr.push_back(a);
    }
        arr.push_back(a);
    
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
