#include<iostream>
using namespace std;

int main()
{
	int n;
	int count=0;
	cin >> n;
	cout << n << " ";

	while(n!=1)
	{
		if(n==1)
		{
			break;
		}
		else
		{
			if(n%2!=0)//odd
			{
				n = n*3+1;
			}
			else 
			{
				n = n/2;
			}
		}
		cout << n << " ";
		count++;
		if(count >= 20)
		{
			n=1;
		}
	}

}
