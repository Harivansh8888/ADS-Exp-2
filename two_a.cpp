#include<iostream>
using namespace std;
class fact
{
	public:
		fact()
		{
			int n;
			cout<<"Enter A Positive Integer: ";
			cin>>n;
			cout<<"Factorial is : "<<factorial(n)<<endl;
		}
