#include <iostream>

using namespace std;
int main() {
    // OYUNCU OZELLIKLERI DEGISKEN KODLARI

    string nick = "Albedo THE One";
    int lvl = 74;
    string playertype = "Samurai";
    int killcount = 67296;
    int deathcount = 63;
    char skillnote = 'A';
    float killperdeath = 1068.19;
    bool newgameplus = 0;


    cout << "Hello, Player " << endl << endl;
    cout << "Here is your status information" << endl << endl << "New Game Plus : " << newgameplus << endl << endl << "nick : " << nick;
    cout << endl << endl << "Level : " << lvl << endl << endl << "Warrior Type : " << playertype;
    cout << endl << endl << "Skill Note : " << skillnote;
    cout << endl << endl << "Kills : " << killcount << endl << endl << "Deaths : " << deathcount << endl << endl;
    cout << "Kill/Death Average : " << killperdeath << endl << endl << "Show More\n\n";
   
    // burasi commentlenmis bir pencere olarak kalicak
  /* 
    cout << "Hello, Player " << endl << endl;
    cout << "Here is your status information" << endl << endl << "New Game Plus : " << newgameplus << endl << endl << "nick : " << nick;
    cout << endl << endl << "Level : " << lvl << endl << endl << "Warrior Type : " << playertype;
    cout << endl << endl << "Skill Note : " << skillnote;
    cout << endl << endl << "Kills : " << killcount << endl << endl << "Deaths : " << deathcount << endl << endl;
    cout << "Kill/Death Average : " << killperdeath << endl << endl << "Show More\n\n";
        */



   
    float x = 12;
    int y = 5;
    float z = x / y;
    cout << endl << endl << z << endl << endl;
    
    // eger ondalik istiyorsan z ve iki tam sayidan birini float olarak ondalik seklinde kaydetmelisin
    return 0;
}