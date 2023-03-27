#include <iostream>

using namespace std;

//Function Prototype 
int add(int numOne, int numTwo);
void display();

int main() 
{
	//Actual parameters that has be the same as your formal parameters
	int x, y;

	display();
	cin >> x >> y;

	cout << "The sum is " << add(x, y) << endl;

	system("Pause");
	return 0;
}
//Value returning functions which means it has a return type
int add(int numOne, int numTwo)
{
	int sum = 0;

	sum = numOne + numTwo;

	return sum;

}
//Void function that does not have return type
void display()
{
	cout << "Enter two numbers. " << endl;
}