#include <iostream>

#include <ctime>



using namespace std;
int main() {
	
	
	srand(time(NULL));
	char alfabe[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' , ' '};

	
    char letter;
    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if  (letter != 'h') {
            cout << letter << endl ;
        }
        else if (letter == 'h')
        {
            cout << letter << endl; 


        }
    } while (letter != 'h');


    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'e') {
            cout << "h" << letter << endl;
        }
        else if (letter == 'e')
        {
            cout << "h" << letter << endl;


        }
    } while (letter != 'e');


    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'l') {
            cout << "he" << letter << endl;
        }
        else if (letter == 'l')
        {
            cout << "he" << letter << endl;


        }
    } while (letter != 'l');


    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'l') {
            cout << "he" << letter << endl;
        }
        else if (letter == 'l')
        {
            cout << "he" << letter << endl;


        }
    } while (letter != 'l');


    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'l') {
            cout << "hel" << letter << endl;
        }
        else if (letter == 'l')
        {
            cout << "hel" << letter << endl;


        }
    } while (letter != 'l');

 
    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'o') {
            cout << "hell" << letter << endl;
        }
        else if (letter == 'o')
        {
            cout << "hell" << letter << endl;


        }
    } while (letter != 'o');

    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != ' ') {
            cout << "hello" << letter << endl;
        }
        else if (letter == ' ')
        {
            cout << "hello" << letter << endl;


        }
    } while (letter != ' ');

    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'w') {
            cout << "hello " << letter << endl;
        }
        else if (letter == ' ')
        {
            cout << "hello " << letter << endl;


        }
    } while (letter != 'w');

    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'o') {
            cout << "hello w" << letter << endl;
        }
        else if (letter == 'o')
        {
            cout << "hello w" << letter << endl;


        }
    } while (letter != 'o');

    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'r') {
            cout << "hello wo" << letter << endl;
        }
        else if (letter == 'r')
        {
            cout << "hello wo" << letter << endl;
        }
    } while (letter != 'r');

    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'l') {
            cout << "hello wor" << letter << endl;
        }
        else if (letter == 'l')
        {
            cout << "hello wor" << letter << endl;
        }
    } while (letter != 'l');

    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != 'd') {
            cout << "hello worl" << letter << endl;
        }
        else if (letter == 'd')
        {
            cout << "hello worl" << letter << endl;
        }
    } while (letter != 'd');



    /* anani yeller aldi ama neden anani yeller aldi bilmiyorum*/




    cout << endl << endl << endl << endl << endl;
	return 0;
}