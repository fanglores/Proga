#include <iostream>
using namespace std;

int addition(int a, int b)
{
	return a + b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int subtraction(int a, int b)
{
	return a - b;
}

int division(int a, int b)
{
	try
	{
		if (b == 0) throw 0;
		return a / b;
	}
	catch (...)
	{
		cout << "\n!!!Fatal Error\n   Division by zero!!!\n";
		return 0;
	}		
}

void test()
{
	int a, b, c;
	cout << "~Testing addition~\n>>";
	scanf_s("%d + %d = %d", &a, &b, &c);
	if(addition(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing subtraction~\n>>";
	scanf_s("%d - %d = %d", &a, &b, &c);
	if(subtraction(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing multiplication~\n>>";
	scanf_s("%d * %d = %d", &a, &b, &c);
	if(multiplication(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing division~\n>>";
	scanf_s("%d / %d = %d", &a, &b, &c);
	if(division(a,b) == c) cout << "Successful!\n\n";

}

int main()
{
	
	cout << "Hll wrld!" << endl;
	test();
}
