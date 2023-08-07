#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
int main()
{

	// write multiple of 7 untill 131
	for (int i = 1; i <= 131; i++)
	{
		if (i % 7 != 0)
			continue;
			cout << i << endl;

	}

	cout << endl << endl << endl << endl << endl;
	bool continueloop = true;
	int i = 1;
	// if we use a loop into another loop then break command just break the loop which is inside
	while (continueloop == true &&  i <= 131)
	{
		for (i; i < 131; i++)
		{

			if (i % 13 == 0) {

				cout << i << endl;
				continue;
			}
			else

				break; // in this line we use break command the loop that is inside

		}
		i++;
	}





	return 0;
}
