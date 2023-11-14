// Reverse The Sentences Project
#include <iostream>
using namespace std;

void reverseSentence(char sentence[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << sentence[i];
    }
}

int main() {
    const int maxsentencelength = 200;
    char sentence[maxsentencelength];

    cin.getline(sentence, maxsentencelength);

    int characterCount = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        characterCount++;
    }

    reverseSentence(sentence, characterCount);

    return 0;
}
