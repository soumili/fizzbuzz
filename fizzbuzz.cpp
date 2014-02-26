#include<iostream>
 using namespace std;

int main()
{
	for(int j = 1; j <= 100; j++)
	{
		if(j % 15 == 0)
			cout<<"\nFizzBuzz";
		else if(j % 3 == 0)
			cout<<"\nFizz";
		else if(j % 5 == 0)
			cout<<"\nBuzz";
		else
			cout<<"\n"<<j;
	}
	cout<<endl;
	return 1;
}