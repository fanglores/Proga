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
		return a / b;
}

void test()
{
	int a, b, c;
	cout << "~Testing addition~\n>>";
	scanf("%d + %d = %d", &a, &b, &c);
	if(addition(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing subtraction~\n>>";
	scanf("%d - %d = %d", &a, &b, &c);
	if(subtraction(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing multiplication~\n>>";
	scanf("%d * %d = %d", &a, &b, &c);
	if(multiplication(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing division~\n>>";
	scanf("%d / %d = %d", &a, &b, &c);
	if(division(a,b) == c) cout << "Successful!\n\n";

}

int main()
{
	
	cout << "Hll wrld!" << endl;
	//test();
}