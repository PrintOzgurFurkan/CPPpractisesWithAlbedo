#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;
int main()
{
	int n;
	cout << "enter a number :";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int k = 1;
		while (k <= i)
		{
			cout << i << " ";
			k++;
		}
		cout << endl;
	}

	return 0;
}