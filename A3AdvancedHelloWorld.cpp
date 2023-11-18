#include <iostream>

#include <ctime>
using namespace std;


void writer(char random, string truepart)
{
    srand(time(NULL));
    char alfabe[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' , ' ' };


    char letter;
    do {
        int RanIndex = rand() % 27;
        letter = alfabe[RanIndex];

        if (letter != random) {
            cout << truepart << letter << endl;
        }
        else if (letter == random)
        {
            cout << truepart<< letter << endl;


        }
    } while (letter != random);

}

int main() {

    int i = 1;
    char helloworld[11] = { 'h' , 'e' , 'l' , 'l' , 'o' , ' ' , 'w' , 'o' , 'r' , 'l' , 'd' };
    string helloworld1[] = {"" , "h" , "he" , "hel" , "hell" , "hello" , "hello " , "hello w" , "hello wo" , "hello wor" , "hello worl"  };


    for (int i = 0; i < 11; ++i)
    {
        writer(helloworld[i], helloworld1[i]);
    }
        
       
   
    return 0;
}