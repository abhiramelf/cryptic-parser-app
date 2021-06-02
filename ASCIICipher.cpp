#include "Header/Cipher.h"

string CipherEncoder(string message) {

	string encodedValue = "";

	for (int i = 0; i < message.size(); i++)
	{
		encodedValue += to_string(int(message[i])) + " ";
	}
	
	if (encodedValue != "") {
		return encodedValue;
	}
	else {
		return "You have not entered any message!";
	}
}