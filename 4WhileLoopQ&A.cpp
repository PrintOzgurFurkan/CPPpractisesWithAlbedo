#include <iostream>

using namespace std;
int main() 
{
	//QUESTION	
	//Write a loop that prints multiples of 7 from 1 to the number entered by the user

	// Here is my Answer
	int index = 1;
	int index1;
	cout << "please enter a random number : ";
	cin >> index1;
	while (index <= index1)
	{
		cout << index * 7 << endl;
		index++;
	}
	return 0;
}