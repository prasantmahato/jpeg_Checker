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
		register int i,size;
		num=i=size=0;

		cout<<"\nEnter the number for it's multiplication table:- ";
		cin>>num;
		cout<<"\nEnter the max num, till you want ot multiply(max. 50):- ";
		cin>>size;

		for(i=1; i<=size; i++)
			cout<<num<<" * "<<i<<": "<<setprecision(2)<<float(num*i)<<endl;
		cout<<endl;		
	}
	return 0;
}
