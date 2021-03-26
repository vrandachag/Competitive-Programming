#include <iostream>
using namespace std;

int main() 
{
	long int T,n,price[100000],max,count=0;
	cin>>T;
	while(T--)
	{
		count = 0;
		cin>>n;
		for(int i = 0;i<n;i++)
		{
			cin>>price[i];
		}

		for(int j = 0 ; j < n-1 ; j++)
		{
			max = price[j];
			int k=n;

			for(k = j+1 ; k < n ; k++)
			{
				if(price[k] > max)
				{
					j = k-1;
					break;
				}
			}

			if(k == n)
			{
				count++;
			}
		}
		cout<<count+1<<"\n";
	}

  return 0;
}
