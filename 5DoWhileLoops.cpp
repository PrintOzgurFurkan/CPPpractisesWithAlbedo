#include <iostream>

using namespace std;
int main()
{
	string user;
	string phonenumber;
	string password;
	string username = "Ozgur Yavuz";
	/*
	string phonenumber = "05541187892";
	string password = "1234";
	*/

	cout << "Do You Have an Account ? \n";
	do
	{
		cin >> user;
		if (user == "no")
		{
			cout << " You can log in from www.SomethingiDontGonnaThinkAbout.com\nSee you later...";
		}
		else if (user == "yes")
		{
			do
			{
				cout << "Please Enter Your Number ; \n";
				cin >> phonenumber;

				if (phonenumber != "05541187892")
				{
					cout << "There is no account registered to the number you entered \nIf You Have One ";
				}
			} while (phonenumber != "05541187892");
			do
			{
				cout << "Please Enter Your Password ; \n";
				cin >> password;

				if (password != "1234")
				{
					cout << "Wrong password\nTry Again \n";
				}
				else if (password == "1234")
				{
					cout << "Welcome " << username << " Enjoy Yourself." << "\n\n\n\n\n\n";
				}
			} while (password != "1234");

		}
		else
			cout << "Invalid transaction" << endl << "Enter Again\n";
	}while (user != "yes" and user != "no");








	return 0;
}