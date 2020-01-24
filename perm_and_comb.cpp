#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(n==0||r==0)
	{
		return 1;
	}
	else if(r==1)
	{
		return n;
	}
	else
	{
		return n*permutation(n-1,r-1);
	}
	
  return 0;
}

int combination(int n, int r)
{
	if(n==0||r==0)
	{
		return 1;
	}
	else if(r==1)
	{
		return n;
	}
	else
	{
		return 1.0*combination(n-1,r-1)/r*n;
	}
	
  return 0;
}

int main()
{
	int n,r,choose;
        double result;
	char choice;
	
	do
	{
		cout<<"Enter the value of n and r for calculations: ";
	    cin>>n>>r;
		try
		{
			if(n<0||r<0)
			{
				throw "The permutation and combination of negative numbers is not defined...";
				exit(0);
			}
			if(r>n)
			{
				throw "It is invalid because r is greater than n...";
				exit(0);
			}
		}
		catch(char const *ch)
		{
			cout<<ch;
		}
		cout<<"What do you want to calculate:    \n";
		cout<<"1.Permutation\n";
		cout<<"2.Combination\n";
		cin>>choose;
		switch(choose)
		{
			case 1:
				{
					result=permutation(n,r);
					cout<<"The permutation of "<<n<<" and "<<r<<" is: ";
					break;
				}
			case 2:
				{
					result=combination(n,r);
					cout<<"The combination of "<<n<<" and "<<r<<" is: ";
					break;
				}
			default:
				{
					cout<<"Invalid choice...";
				}
				
		}
		cout<<result<<endl;
		cout<<"Do you want to continue(Y/N): ";
		cin>>choice;		
	}while(choice=='Y'||choice=='y');

	
  return 0;
}
