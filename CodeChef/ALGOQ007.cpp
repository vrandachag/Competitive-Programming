//https://www.codechef.com/ALQN2021/problems/ALGOQ007
// A optimized school method based C++ program to check
// if a number is prime
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

// Driver Program to test above function
int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        bool check = isPrime(N);
        if(check)
        {
            int temp = N;
            if(N-2 == 0 || N-3 == 0)
            {
                cout<<"1 NO\n";
            }
            else
            {
                temp = temp - (2*((temp/2)-1));
                if(temp>=3)
                    temp = temp - 3;
                if(temp != 0)
                {
                    for(int i = 5 ; i< N ; i++ )
                    {
                        if(temp>0)
                        {
                            if(i)
                            {
                                temp = temp-i;
                            }
                        }
                        else
                        {
                            cout<<"1 NO\n";
                            break;
                        }
                        if(N == 0)
                        {
                            cout<<"1 YES\n";
                            break;
                        }
                    }
                }
                else
                {
                    cout<<"1 YES\n";
                }
            }
            
        }
        else
            cout<<"0\n";
    }
	return 0;
}
