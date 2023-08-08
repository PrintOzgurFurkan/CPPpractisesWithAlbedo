

#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <istream>

using namespace std;
int main()
{
    string input;

    cout << "hello please enter your weight and height in this order ;";
    getline(cin, input);

    istringstream iss(input);
    double weight, height;

    double result = 1;
    iss >> weight >> height;
    bool situation = true;

    if (situation = true) {

        height = height / 100;
        height = height * height;

        result *= weight;
        result /= height;

        cout << "VKI ; " << result << endl << "Weight ; " << weight << endl << "Height ; " << height << endl;
    }
    else {
        cout << "Invalid Entry!" << endl;
    }





    while (situation){
            if (result <= 18.5) {
                cout << "You are underweight you should be careful with your diet ";
                break;
            }
            else if (result <= 24.99999 and result >= 18.500001) {
                cout << "Keep going on this way, your weight is normal af  ";
                break;
            }
            else if (result <= 29.999999 and result >= 25.0) {
                cout << "You have a little bit weight, you are not obese but also normal too ";
                break;
            }
            else if (result <= 34.99999 and result >= 30.0) {
                cout << "You are morbidly obese. You should pass a better diet ";
                break;
            }
            else if (result <= 39.99999 and result >= 35.0) {
                cout << "You are severely obese. You should see a doctor  ";
                break;
            }
            else if (result >= 40) {
                cout << "You are extremely obese. You should see a doctor immediately ";
                break;
            }
        }



        cout << "\n\n\n\n\n\n\n"
            << "18,5 kg/m2 and lower values = Zayif\n"
            << "values between 18,5 ve 24,9 kg/m2  = Normal agirlikta\n"
            << "values between 25,0 ve 29,9 kg/m2 = Kilolu\n"
            << "values between 30,0 ve 34,9 kg/m2  = 1. derece obezite\n"
            << "values between 35,0 ve 39,9 kg/m2  = 2. derece obezite\n"
            << "40 kg/m2 and higher values = 3. derece obezite\n";
           

	return 0;
}


/*
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Kilo ve boyu girin (örnek: '82 192'): ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int kilo, boy;

    if (iss >> kilo >> boy) {
        std::cout << "Kilo: " << kilo << std::endl;
        std::cout << "Boy: " << boy << std::endl;
    }
    else {
        std::cout << "Geçersiz giriş!" << std::endl;
    }

    return 0;
}
*/