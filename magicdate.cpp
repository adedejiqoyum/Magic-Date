// Name: Adedeji Tiamiyu
//Date: November 30, 2020
//Description: Calculator
//Magic date program
#include <iostream>
using namespace std;

int main()
{
	//define date variables
	int tmonth, //hold month
		tday, //hold day
		tyear; //hold 4 digit year
	
	//get the month
	cout << "Please enter the month:";
	cin >> tmonth;

		//get day
		cout << "Please enter day:";
	cin >> tday;

	//get the 4 digit year
	cout << "Please enter 4 digit year:";
	cin >> tyear;

	//determine if date is magic
	if (tmonth * tday * 16.6666667 == tyear)
	{
		cout << "\nYour date is MAGIC!!!\n";
	}
	else
	{
		cout << "\nYour date is not MAGIC\n";
	}
system("pause");
		return 0;
}