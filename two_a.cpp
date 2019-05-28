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
			int factorial(int n)
		{
			if (n>1)
			    return n * factorial(n-1);
			else
			    return 1;
		}
		~fact()
		{
			cout<<"Bye";
		}
};
int main()
{
	fact obj;
	return 0;
}

