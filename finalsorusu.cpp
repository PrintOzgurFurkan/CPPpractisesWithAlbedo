/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int createrand(void);
void createarray(int arr[]);
void check(int num);

int main(void) {
    srand(time(NULL)); // Seed the random number generator with the current time

    int numbers[5];

    createarray(numbers);

    for (int i = 0; i < 5; ++i) {
        check(numbers[i]);
    }

    return 0;
}

int createrand(void) {
    return rand() % 900 + 100; // Generates a random number between 100 and 999
}

void createarray(int arr[]) {
    for (int i = 0; i < 5; ++i) {
        arr[i] = createrand();
    }
}

void check(int num) {

    if (num / 100 == num % 10) {
        printf("%d is a palindromic number.\n", num);
    }
    else {
        printf("%d is not a palindromic number.\n", num);
    }
}
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int createrand(void);
void createarray(int arr[]);
void check(int num);
void hollyshit(int arr[]);

int main() {

    srand(time(NULL)); 
    int array[5];
    createarray(array);
    cout << endl;
    cout << endl;
    for (int i = 0; i < 5; ++i) {

        cout << array[i] << ",";
    }
    cout << endl;
    hollyshit(array);

    return 0;
}
void createarray(int arr[]) {

    for (int i = 0; i < 5; ++i) {
        arr[i] = createrand();
        check(arr[i]);

    }

}


int createrand(void) {
    
    int x;
    x = rand() % 900 + 100;
    return x;


}





void check(int num) {
    
    int x = num;
    int i = 0;
    //cout << x << endl;

    while (x != 1) {

        if (0 == x % 2) {
            x = x / 2;
            i++;
            //cout << x << endl; 
       
        }
        else if (0 != x % 2) {
            x = x + 1;
            i++;


            //cout << x << endl; 
        }
    }

    cout << num << " over " << i << " steps"<< endl;
}


void hollyshit(int arr[]) {
   
    while (arr[0] == arr[1] == arr[2] == arr[3] == arr[4] != 1){
       
        for (int i = 0; i < 5; ++i) {

            if (arr[i] != 1) {
                if (0 == arr[i] % 2) {
                    arr[i] = arr[i] / 2;



                }
                else if (0 != arr[i] % 2) {
                    arr[i] = arr[i] + 1;




                }
            }
        }
        for (int i = 0; i < 5; ++i) {

            cout << arr[i] << ",";
        }
        cout << endl;
        
    
    
    
    
    
    }

}


