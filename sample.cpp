#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	int test=1;
	cout<<"\nEnter Test Cases:- ";
	cin>>test;

	while(test--)
	{
		register float num;
		register int i;
		num=i=0;
		cout<<"\nEnter the number for it's multiplication table:- ";
		cin>>num;
		for(i=1; i<=10; i++)
			cout<<num<<" * "<<i<<": "<<setprecision(2)<<float(num*i)<<endl;
		cout<<endl;		
	}
	return 0;
}
