#include "Header/Cipher.h"

using namespace std;

string CipherDecoder(string message) {

	string decodedValue = "";

    vector <string> messageTokens;

    stringstream messageStream(message);
    string messageTemp;

    while (getline(messageStream, messageTemp, ' '))
    {
        messageTokens.push_back(messageTemp);
    }

	for (int i = 0; i < messageTokens.size(); i++) {
		decodedValue += char(stoi(messageTokens[i]));
	}

	return decodedValue;
}