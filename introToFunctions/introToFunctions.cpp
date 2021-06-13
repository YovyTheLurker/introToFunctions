// introToFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void function();//declaration of function

int main()
{
	cout << "Hello from main()." << endl;
	//functions make your code reusable. These three instances of function() will be executed.
	function();
	function();
	function();
}
//definition of function.
void function() {
	cout << "Hello from function()." << endl;

}
