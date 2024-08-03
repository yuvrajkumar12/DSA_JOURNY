#include <iostream>
#include <string>

using namespace std;

string encodeText(string text) {
    string encodedText = "";

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];

        if (isalpha(c)) {
            if (i % 2 == 0) {
                encodedText += toupper(c);
            } else {
                encodedText += tolower(c);
            }
        } else if (isspace(c)) {
            encodedText += (i % 2 == 0) ? '#' : ':';
        } else {
            encodedText += '*'; 
        }
    }

    return encodedText;
}

int main() {
    string inputText = "the mangy, scrawny stray dog hurriedly gobbled down the grain-free, organic dog food.";
    string encodedOutput = encodeText(inputText);
    cout << encodedOutput << endl;
    return 0;
}
