#include <iostream>

using namespace std;
int main() 
{
	//QUESTION	
	//Write a loop that prints multiples of 7 from 1 to the number entered by the user

	// Here is my Answer
	
	
	/*
	int index = 1;
	int index1;
	cout << "please enter a random number : ";
	cin >> index1;
	while (index <= index1)
	{
		cout << index * 7 << endl;
		index++;
	}
	*/

	// edit;
	// that answer is wrong so here is the correct one 
	// question dont want the seven times numbers that is one from the number entered by the user
	// it wants the multiples of seven till the number entered by the user
	// so lest began

	int index = 1;
	int index1;
	cout << "please enter a random number : ";
	cin >> index1;
	while (index <= index1)
	{
		if (index % 7 == 0)
		{
			cout << index << endl;
			

		}
		
		index++;
	
	}
	
	return 0;
}