#include "Header/Cipher.h"

#pragma region GlobalRegion
int choice;
#pragma endregion

#pragma region Encoder
#define MAX_MESSAGE_LEN 500

char inputMessage[MAX_MESSAGE_LEN];
string encodedMessage;
#pragma endregion

#pragma region Decoder
#define MAX_CODED_LEN 500

char codedMessage[MAX_CODED_LEN];
string decodedMessage;
#pragma endregion

void Encode() {
    cout << "Enter your message to Encode: ";
    cin.ignore();
    cin.getline(inputMessage, MAX_MESSAGE_LEN);

    encodedMessage = CipherEncoder(inputMessage);

    cout << "Your encoded message is: " << encodedMessage << endl;
}

void Decode() {
    cout << "Enter the Encoded message: ";
    cin.ignore();
    cin.getline(codedMessage, MAX_CODED_LEN);

    decodedMessage = CipherDecoder(codedMessage);

    cout << "Your decoded message is: " << decodedMessage << endl;
}

int main()
{
    cout << "Welcome to CRYPTIC PARSER!" << endl <<
        "Press 1 to Encode / Press 2 to Decode" << endl;
    cin >> choice;

    if (choice == 1) {
        Encode();
    }
    else if (choice == 2) {
        Decode();
    }
    else {
        cout << "Invalid input! System shutting down..." << endl;
    }

    system("pause > 0");
}
