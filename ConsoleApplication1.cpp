
#include <iostream>
using namespace std;

int main()
{
	//taking two numbers
	int number1, number2;

	cout << "Enter number1: ";
	cin >> number1; // let's say x

	cout << "Enter number2: ";
	cin >> number2; // let's say y

	number1 += number2;	//x=x+y
	number2 += number1; //y=y+(x+y) => y=2y+x
	number1 = number2 - number1; // x = (x+2y)-(x+y) => x=y
	number2 -= 2 * number1; // y = (2y+x)- 2y => y=x

	//print the result
	cout << "Number1: " << number1 << endl << "Number2: " << number2 << endl;

	return 0;
}

